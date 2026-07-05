#!/usr/bin/env node
const fs = require('fs');

// --- Phase 1: Structural analysis of the codebase ---

const input = JSON.parse(fs.readFileSync('/tmp/ua-arch-input.json', 'utf8'));
const { fileNodes, importEdges, allEdges } = input;

// Build a map of node id -> node
const nodeMap = {};
fileNodes.forEach(n => { nodeMap[n.id] = n; });

// Build adjacency: who imports whom
const outEdges = {};  // source -> [targets]
const inEdges = {};   // target -> [sources]
fileNodes.forEach(n => {
  outEdges[n.id] = [];
  inEdges[n.id] = [];
});
importEdges.forEach(e => {
  outEdges[e.source].push(e.target);
  inEdges[e.target].push(e.source);
});

// Map node id to its directory path
function getDir(id) {
  const path = id.replace(/^file:/, '');
  const parts = path.split('/');
  return parts.slice(0, -1).join('/');
}

// Detect layer by directory prefix
function classifyLayer(id) {
  const path = id.replace(/^file:/, '');
  if (path.startsWith('src/sjc/osio/')) return 'os-abstraction';
  if (path.startsWith('src/sjc/compbase/')) return 'compiler-core';
  if (path.startsWith('src/sjc/frontend/')) return 'frontend';
  if (path.startsWith('src/sjc/symbols/')) return 'symbol-resolution';
  if (path.startsWith('src/sjc/relations/')) return 'relations';
  if (path.startsWith('src/sjc/backend/')) return 'backend';
  if (path.startsWith('src/sjc/memory/')) return 'memory-image';
  if (path.startsWith('src/sjc/compression/')) return 'compression';
  if (path.startsWith('src/sjc/debug/')) return 'debug';
  if (path.startsWith('src/sjc/real/')) return 'runtime-support';
  if (path.startsWith('src/sjc/output/')) return 'output-format';
  if (path.startsWith('src/sjc/ui/')) return 'entry-point';
  if (path.startsWith('src/compiler/')) return 'entry-point';
  if (path.startsWith('src/jx/')) return 'binary-libraries';
  if (path.startsWith('src/nl/')) return 'binary-libraries';
  if (path.startsWith('src/jCPU/')) return 'binary-libraries';
  if (path.startsWith('app/')) return 'demo-applications';
  if (path.startsWith('test/')) return 'demo-applications';
  if (path.startsWith('nbproject/')) return 'project-config';
  if (path.startsWith('.understand-anything/')) return 'project-config';
  return 'build-artifacts';  // root-level .bin, .hex, .img files
}

// Compute per-layer stats
const layerMembers = {};
fileNodes.forEach(n => {
  const layer = classifyLayer(n.id);
  if (!layerMembers[layer]) layerMembers[layer] = [];
  layerMembers[layer].push(n.id);
});

// Compute dependency flow between layers
const layerDepMatrix = {};
Object.keys(layerMembers).forEach(l => { layerDepMatrix[l] = {}; });

importEdges.forEach(e => {
  const srcLayer = classifyLayer(e.source);
  const tgtLayer = classifyLayer(e.target);
  if (srcLayer !== tgtLayer) {
    if (!layerDepMatrix[srcLayer][tgtLayer]) layerDepMatrix[srcLayer][tgtLayer] = 0;
    layerDepMatrix[srcLayer][tgtLayer]++;
  }
});

// Compute topological order of layers using Kahn's algorithm
// First build a DAG of layers
const layerGraph = {};
Object.keys(layerMembers).forEach(l => { layerGraph[l] = { in: new Set(), out: new Set() }; });
Object.keys(layerDepMatrix).forEach(src => {
  Object.keys(layerDepMatrix[src]).forEach(tgt => {
    layerGraph[src].out.add(tgt);
    layerGraph[tgt].in.add(src);
  });
});

// Topological sort
const sorted = [];
const noIn = Object.keys(layerGraph).filter(l => layerGraph[l].in.size === 0);
const queue = [...noIn];
const visited = new Set();
while (queue.length > 0) {
  queue.sort(); // deterministic
  const node = queue.shift();
  if (visited.has(node)) continue;
  visited.add(node);
  sorted.push(node);
  for (const out of layerGraph[node].out) {
    layerGraph[out].in.delete(node);
    if (layerGraph[out].in.size === 0) queue.push(out);
  }
}
// Add any unvisited nodes (disconnected or cycles)
Object.keys(layerMembers).forEach(l => {
  if (!visited.has(l)) sorted.push(l);
});

// Per-layer metrics
const analysis = sorted.map(layer => ({
  layer,
  fileCount: layerMembers[layer].length,
  files: layerMembers[layer],
  dependsOn: Object.keys(layerDepMatrix[layer] || {}).filter(k => layerDepMatrix[layer][k] > 0),
  dependedBy: Object.keys(layerGraph).filter(k => (layerGraph[k].out.has(layer) || (layerDepMatrix[k] && layerDepMatrix[k][layer]))),
  dependencyCount: Object.values(layerDepMatrix[layer] || {}).reduce((a, b) => a + b, 0),
  tags: []
}));

const result = {
  totalFileNodes: fileNodes.length,
  totalImportEdges: importEdges.length,
  totalFileEdges: allEdges.length,
  topologicalOrder: sorted,
  layers: analysis,
  edgesByLayer: {}
};

// Write analysis
console.log(JSON.stringify(result, null, 2));

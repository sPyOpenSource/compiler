#!/usr/bin/env node
// Phase 1: Structural analysis for tour building
const fs = require('fs');
const graph = JSON.parse(fs.readFileSync('/Users/xuyi/Source/Java/V0191/.understand-anything/intermediate/assembled-graph.json','utf8'));
const layers = JSON.parse(fs.readFileSync('/Users/xuyi/Source/Java/V0191/.understand-anything/intermediate/layers.json','utf8'));
const scan = JSON.parse(fs.readFileSync('/Users/xuyi/Source/Java/V0191/.understand-anything/intermediate/scan-result.json','utf8'));

const fileNodes = graph.nodes.filter(n => n.type === 'file' && n.id && n.id.startsWith('file:'));
const fileMap = {};
fileNodes.forEach(n => { fileMap[n.id] = n; });

const edges = graph.edges || [];
const importEdges = edges.filter(e => e.type === 'imports' || e.label === 'imports');

// Build dependency graph
const deps = {}; // target -> [sources]
importEdges.forEach(e => {
  if (!deps[e.target]) deps[e.target] = [];
  deps[e.target].push(e.source);
});
const rdeps = {}; // source -> [targets]
importEdges.forEach(e => {
  if (!rdeps[e.source]) rdeps[e.source] = [];
  rdeps[e.source].push(e.target);
});

// Identify pipeline stages based on directory structure
const stages = {
  osio: fileNodes.filter(n => n.id.includes('/osio/')).map(n => n.id),
  jx: fileNodes.filter(n => n.id.includes('/jx/')).map(n => n.id),
  jcpu: fileNodes.filter(n => n.id.includes('/jCPU/')).map(n => n.id),
  nl: fileNodes.filter(n => n.id.includes('/nl/')).map(n => n.id),
  symbols: fileNodes.filter(n => n.id.includes('/symbols/')).map(n => n.id),
  relations: fileNodes.filter(n => n.id.includes('/relations/')).map(n => n.id),
  frontend: fileNodes.filter(n => n.id.includes('/frontend/')).map(n => n.id),
  backend: fileNodes.filter(n => n.id.includes('/backend/')).map(n => n.id),
  compbase: fileNodes.filter(n => n.id.includes('/compbase/')).map(n => n.id),
  memory: fileNodes.filter(n => n.id.includes('/memory/')).map(n => n.id),
  output: fileNodes.filter(n => n.id.includes('/output/')).map(n => n.id),
  debug: fileNodes.filter(n => n.id.includes('/debug/')).map(n => n.id),
  compression: fileNodes.filter(n => n.id.includes('/compression/')).map(n => n.id),
  real: fileNodes.filter(n => n.id.includes('/real/')).map(n => n.id),
  ui: fileNodes.filter(n => n.id.includes('/ui/')).map(n => n.id),
  compiler: fileNodes.filter(n => n.id.includes('/compiler/')).map(n => n.id),
  app: fileNodes.filter(n => n.id.includes('app/')).map(n => n.id),
  test: fileNodes.filter(n => n.id.includes('test/')).map(n => n.id)
};

// Find the actual .java files (not .ctxt, .bluej, etc.)
const javaFileNodes = fileNodes.filter(n => (n.properties && n.properties.language === 'java') || n.id.endsWith('.java'));
const javaFiles = javaFileNodes.map(n => n.id);

const analysis = {
  totalNodes: graph.nodes.length,
  fileNodes: fileNodes.length,
  javaSourceFiles: javaFiles.length,
  importEdges: importEdges.length,
  stages: {},
  pipelineOrder: [
    'osio', 'compbase', 'jx', 'nl', 'jcpu',
    'frontend', 'symbols', 'relations',
    'backend', 'memory', 'debug', 'compression',
    'real', 'output', 'ui', 'compiler',
    'app', 'test'
  ],
  fanIn: {},
  fanOut: {}
};

// Compute fan-in (how many things import this) and fan-out (how many things this imports)
Object.keys(deps).forEach(target => {
  analysis.fanIn[target] = deps[target].length;
});
Object.keys(rdeps).forEach(source => {
  analysis.fanOut[source] = rdeps[source].length;
});

// Identify the most important files (high fan-in as dependency targets)
const sortedByFanIn = Object.entries(analysis.fanIn)
  .filter(([id]) => id.startsWith('file:'))
  .sort((a,b) => b[1] - a[1])
  .slice(0, 15);

analysis.mostDependedUpon = sortedByFanIn.map(([id, count]) => ({ id, count }));

// Identify entry files (high fan-out, files that import many things)
const sortedByFanOut = Object.entries(analysis.fanOut)
  .filter(([id]) => id.startsWith('file:'))
  .sort((a,b) => b[1] - a[1])
  .slice(0, 15);

analysis.mostImporting = sortedByFanOut.map(([id, count]) => ({ id, count }));

// Layer stats
analysis.layers = layers.map(l => ({
  id: l.id,
  name: l.name,
  fileCount: l.nodeIds.length
}));

// Key pipeline files (the compilation chain)
const keyPipelineFiles = [
  'file:src/sjc/ui/SCG.java',
  'file:src/sjc/ui/SC.java',
  'file:src/sjc/ui/Boot.java',
  'file:src/sjc/compbase/Context.java',
  'file:src/sjc/osio/sun/SunOS.java',
  'file:src/sjc/osio/OsIO.java',
  'file:src/sjc/osio/TextPrinter.java',
  'file:src/sjc/frontend/FrontAdmin.java',
  'file:src/sjc/frontend/Lexer.java',
  'file:src/sjc/symbols/SymbolFactory.java',
  'file:src/sjc/symbols/MthdSymbols.java',
  'file:src/sjc/symbols/RTESymbols.java',
  'file:src/sjc/symbols/RawSymbols.java',
  'file:src/sjc/relations/RelationManager.java',
  'file:src/sjc/backend/ArchFactory.java',
  'file:src/sjc/backend/Architecture.java',
  'file:src/sjc/backend/x86/AMD64.java',
  'file:src/sjc/backend/atmel/ATmega.java',
  'file:src/sjc/backend/arm/ARM7.java',
  'file:src/sjc/backend/dennisk/JVM.java',
  'file:src/sjc/backend/ssa/SSA.java',
  'file:src/sjc/memory/MemoryImage.java',
  'file:src/sjc/output/OutputFactory.java',
  'file:src/sjc/output/OutputFormat.java',
  'file:src/sjc/output/BootOut.java',
  'file:src/sjc/output/HexOut.java',
  'file:src/sjc/output/RawOut.java',
  'file:src/sjc/real/EmulReal.java',
  'file:src/sjc/debug/Dwarf.java',
  'file:src/sjc/compression/BZL.java',
  'file:src/jx/classfile/ClassData.java',
  'file:src/sjc/memory/BootableImage.java',
  'file:test/CompilerTest.java'
];

analysis.pipelineFiles = keyPipelineFiles
  .filter(id => fileMap[id])
  .map(id => ({ id, name: fileMap[id].name || id.split('/').pop() }));

fs.writeFileSync(
  '/Users/xuyi/Source/Java/V0191/.understand-anything/tmp/ua-tour-analysis.json',
  JSON.stringify(analysis, null, 2)
);
console.log('Analysis complete.');
console.log(`Total nodes: ${analysis.totalNodes}, File nodes: ${analysis.fileNodes}, Java files: ${analysis.javaSourceFiles}`);
console.log(`Most depended-upon: ${analysis.mostDependedUpon.map(m => m.id.split('/').pop()).join(', ')}`);

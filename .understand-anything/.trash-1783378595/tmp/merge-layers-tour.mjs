import fs from 'fs';

const graph = JSON.parse(fs.readFileSync('/Users/xuyi/Source/Java/compiler/.understand-anything/intermediate/assembled-graph.json', 'utf8'));
const layers = JSON.parse(fs.readFileSync('/Users/xuyi/Source/Java/compiler/.understand-anything/intermediate/layers.json', 'utf8'));
const tour = JSON.parse(fs.readFileSync('/Users/xuyi/Source/Java/compiler/.understand-anything/intermediate/tour.json', 'utf8'));

graph.layers = layers;
graph.tour = tour;

fs.writeFileSync('/Users/xuyi/Source/Java/compiler/.understand-anything/intermediate/assembled-graph.json', JSON.stringify(graph, null, 2));
console.log('Merged layers and tour into assembled-graph.json');

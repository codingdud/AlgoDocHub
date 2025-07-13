# Graph Algorithm Questions and Solutions

This document defines the specific questions/problems that each code file in the graph directory solves.

## Basic Graph Representations

### 1. [adjacentgraph.cpp](basic/adjacentgraph.cpp)
**Question**: How to represent an undirected graph using adjacency list?
- Creates adjacency list representation for undirected graph
- Takes n nodes and m edges as input
- Stores bidirectional connections using unordered_set

### 2. [adjancegraphdirected.cpp](basic/adjancegraphdirected.cpp)
**Question**: How to represent a directed graph using adjacency list?
- Creates adjacency list representation for directed graph
- Takes n nodes and m edges as input
- Stores unidirectional connections using vector

### 3. [graph.cpp](basic/graph.cpp)
**Question**: How to represent an undirected graph using adjacency matrix?
- Creates adjacency matrix representation for undirected graph
- Uses 2D vector with 1s and 0s to represent connections
- Symmetric matrix for undirected edges

### 4. [graphmaterixdirected.cpp](basic/graphmaterixdirected.cpp)
**Question**: How to represent a directed graph using adjacency matrix?
- Creates adjacency matrix representation for directed graph
- Uses 2D vector with 1s and 0s
- Non-symmetric matrix for directed edges

## Graph Traversal Algorithms

### 5. [bfs.cpp](cp-questions/bfs.cpp)
**Question**: How to traverse a graph using Breadth-First Search (BFS)?
- Implements BFS traversal using queue
- Visits all nodes level by level
- Handles disconnected components

### 6. [dfs.cpp](cp-questions/dfs.cpp)
**Question**: How to traverse a graph using Depth-First Search (DFS) iteratively?
- Implements DFS traversal using stack
- Goes as deep as possible before backtracking
- Handles disconnected components

## Cycle Detection

### 7. [detectcycle.cpp](cp-questions/detectcycle.cpp)
**Question**: How to detect cycle in an undirected graph using BFS?
- Uses BFS with parent tracking
- Detects cycle when visiting already visited node (not parent)
- Returns true if cycle exists

### 8. [cycleInUdrivtedRec.cpp](cp-questions/cycleInUdrivtedRec.cpp)
**Question**: How to detect cycle in an undirected graph using DFS recursion?
- Uses recursive DFS with parent tracking
- Detects cycle when visiting already visited node (not parent)
- Returns true if cycle found

### 9. [cycleInUdrivtedStk.cpp](cp-questions/cycleInUdrivtedStk.cpp)
**Question**: How to detect cycle in an undirected graph using DFS with stack?
- Uses iterative DFS with stack and parent tracking
- Alternative to recursive approach
- Detects cycle in undirected graph

### 10. [cycleUndirectdfs.cpp](cp-questions/cycleUndirectdfs.cpp)
**Question**: How to detect cycle in a directed graph using DFS?
- Uses DFS with visited and path visited arrays
- Detects back edge indicating cycle
- Works specifically for directed graphs

## Bipartite Graph

### 11. [ispiradebfs.cpp](cp-questions/ispiradebfs.cpp)
**Question**: How to check if a graph is bipartite using BFS?
- Uses BFS with 2-coloring approach
- Returns true if graph can be colored with 2 colors
- Uses stack (despite filename suggesting BFS)

### 12. [ispiradedfs.cpp](cp-questions/ispiradedfs.cpp)
**Question**: How to check if a graph is bipartite using BFS?
- Uses BFS with 2-coloring approach
- Returns true if graph can be colored with 2 colors
- Actually implements BFS (uses queue)

### 13. [ispiradeRec.cpp](cp-questions/ispiradeRec.cpp)
**Question**: How to check if a graph is bipartite using recursive DFS?
- Uses recursive DFS with 2-coloring
- Returns true if graph can be 2-colored
- Handles disconnected components

## Shortest Path Algorithms

### 14. [shortestPathBSF.cpp](cp-questions/shortestPathBSF.cpp)
**Question**: How to find shortest path in unweighted graph using BFS?
- Uses BFS to find shortest distance from source
- Works only for unweighted graphs
- Returns distance array from source to all nodes

### 15. [sortestPath.cpp](cp-questions/sortestPath.cpp)
**Question**: How to find shortest path in weighted DAG using topological sort?
- Uses topological sort + relaxation
- Works only for Directed Acyclic Graphs (DAG)
- Finds shortest path from source to all nodes

### 16. [dijsktra.cpp](cp-questions/dijsktra.cpp)
**Question**: How to find shortest path in weighted graph using Dijkstra's algorithm?
- Uses priority queue for minimum distance selection
- Works for non-negative weighted graphs
- Returns shortest distances from source to all nodes

## Topological Sorting

### 17. [topological.cpp](cp-questions/topological.cpp)
**Question**: How to perform topological sorting using DFS?
- Uses DFS with stack to store finish times
- Works only for DAG (Directed Acyclic Graph)
- Returns topologically sorted order

### 18. [toposortKahn.cpp](cp-questions/toposortKahn.cpp)
**Question**: How to perform topological sorting using Kahn's algorithm?
- Uses BFS with indegree calculation
- Works only for DAG
- Returns topologically sorted order

### 19. [toposortFindCyc.cpp](cp-questions/toposortFindCyc.cpp)
**Question**: How to detect cycle in directed graph using topological sort?
- Uses Kahn's algorithm
- If topological sort includes all nodes, no cycle exists
- Returns true if cycle detected

## Special Graph Problems

### 20. [alineOrder.cpp](cp-questions/alineOrder.cpp)
**Question**: How to find the order of characters in an alien dictionary?
- Uses topological sorting on character dependencies
- Builds graph from adjacent string comparisons
- Returns the alien alphabet order

### 21. [numberofisland.cpp](cp-questions/numberofisland.cpp)
**Question**: How to count number of unique islands in a 2D grid?
- Uses DFS to explore connected components
- Normalizes island shapes relative to starting position
- Returns count of unique island shapes

### 22. [rotaintomato.cpp](cp-questions/rotaintomato.cpp)
**Question**: How to find minimum time for all oranges to rot?
- Uses multi-source BFS from all rotten oranges
- Simulates rotting process level by level
- Returns minimum time or -1 if impossible

## Summary

The graph directory contains **22 different algorithms** solving various graph problems:
- **4** basic graph representation methods
- **2** graph traversal algorithms (BFS, DFS)
- **4** cycle detection algorithms
- **3** bipartite graph checking algorithms
- **3** shortest path algorithms
- **3** topological sorting algorithms
- **3** special graph problems

Each implementation demonstrates different approaches and techniques for solving fundamental graph theory problems commonly asked in competitive programming and technical interviews.
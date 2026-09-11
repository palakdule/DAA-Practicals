# Post Lab: Graph Colouring using Backtracking

## Aim

To implement the Graph Colouring Problem using the Backtracking technique.

## Problem Statement

Given a graph with a fixed number of colours, assign colours to all vertices such that no two adjacent vertices have the same colour. The problem is solved using Backtracking to find a valid colouring if one exists.

## Algorithm

1. Start with the first vertex of the graph.
2. Try each available colour for the current vertex.
3. Check whether the selected colour is safe for the vertex.
4. If the colour is safe, assign it to the vertex.
5. Move to the next vertex and repeat the process.
6. If no valid colour is available, backtrack to the previous vertex.
7. Try another colour and continue the process.
8. If all vertices are coloured successfully, display the colour assignment.
9. If no valid assignment is possible, report that the graph cannot be coloured using the given number of colours.

## Time Complexity

- Worst Case: O(M^V)

where `M` is the number of colours and `V` is the number of vertices.

## Space Complexity

- O(V) for the colour array and recursion stack
- O(V²) for the adjacency matrix

## Language Used

- C

## File

- `graphColoring.c`

## Learning Outcome

This practical helps in understanding the Backtracking technique and its application to constraint-based problems. It demonstrates how different colour assignments are tried and how invalid assignments are removed through backtracking to obtain a valid graph colouring.

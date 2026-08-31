# Practical 5 - Kruskal's Minimum Spanning Tree

## Aim

To implement Kruskal's Minimum Spanning Tree (MST) algorithm to find the minimum cost required to connect all vertices in a weighted graph.

## Problem Statement

A government is planning a nationwide high-speed fiber internet network connecting multiple cities. Each possible cable connection between cities has a different installation cost. The government wants to connect all cities while minimizing the total construction cost.

Your task is to determine the minimum total cost required to connect all cities using Kruskal's Minimum Spanning Tree Algorithm.

## Algorithm

1. Read the number of vertices and edges.
2. Input all edges with their source, destination, and weight.
3. Sort all edges in ascending order of weight.
4. Initialize each vertex as a separate set.
5. Traverse the sorted edges:
   - If adding an edge does not form a cycle, include it in the MST.
   - Merge the two sets using Union-Find.
6. Continue until all vertices are connected.
7. Display the minimum cost of the Minimum Spanning Tree.

## Time Complexity

- Sorting edges: **O(E log E)**
- Union-Find operations: **O(E α(V))**
- Overall: **O(E log E)**

> Here, α(V) (Inverse Ackermann Function) grows extremely slowly and is considered nearly constant in practice.

## Space Complexity

- **O(V + E)**

## Language Used

- C

## File

- `kruskal_mst.c`

## Learning Outcome

- Understood the Greedy approach used in Kruskal's Algorithm.
- Learned how Union-Find (Disjoint Set) helps detect cycles efficiently.
- Implemented Minimum Spanning Tree construction using edge sorting.
- Analyzed the time and space complexity of Kruskal's Algorithm.

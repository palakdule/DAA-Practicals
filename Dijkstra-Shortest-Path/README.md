# Practical 6 - Dijkstra's Shortest Path Algorithm

## Aim

To implement Dijkstra's Shortest Path Algorithm to find the minimum travel time from a source vertex to all other vertices in a weighted graph.

## Problem Statement

You are developing a real-time emergency ambulance routing system for Mumbai, one of India's busiest metropolitan cities.

- Road intersections are represented as graph vertices.
- Roads are represented as weighted edges, where the weight indicates travel time (affected by traffic density, road conditions, etc.).

When an emergency occurs, the system must instantly compute the shortest travel time from the hospital to all locations in the city to ensure ambulances reach patients as quickly as possible.

Implement Dijkstra's Algorithm to determine the shortest path from the source vertex to every other vertex.

## Algorithm

1. Read the number of vertices and edges.
2. Create a weighted graph using an adjacency matrix.
3. Input all edges and their weights.
4. Read the source vertex.
5. Initialize the distance of the source vertex as 0 and all other vertices as infinity.
6. Repeatedly select the unvisited vertex with the minimum distance.
7. Update the distances of all adjacent vertices if a shorter path is found.
8. Repeat until all reachable vertices are processed.
9. Display the shortest distance from the source to every vertex.

## Time Complexity

- **O(V²)**

## Space Complexity

- **O(V²)** (Adjacency Matrix)
- **O(V)** (Distance and Visited arrays)

## Language Used

- C

## File

- `dijkstra_shortest_path.c`

## Learning Outcome

- Understood Dijkstra's Greedy Algorithm for finding shortest paths.
- Learned how weighted graphs can be represented using an adjacency matrix.
- Implemented shortest path computation from a single source vertex.
- Analyzed the time and space complexity of Dijkstra's Algorithm.

# Practical 10 - Post Reach Analysis using Depth-First Search (DFS)

## Aim

To determine the full extent of a social media post's reach by finding all users reachable from a starting user using **Depth-First Search (DFS)**.

## Problem Statement

Users are represented as nodes in a directed graph, and follow relationships are represented as directed edges.

When a user posts content, the system uses DFS to determine all users reachable from the starting user by following the chain of interactions.

## Algorithm

1. Represent users as vertices and relationships as directed edges.
2. Initialize all users as unvisited.
3. Start DFS from the given starting user.
4. Mark the current user as visited and print the user ID.
5. Increase the total reach count.
6. Visit all unvisited users directly reachable from the current user.
7. Repeat the process recursively until all reachable users are visited.
8. Print the total number of users reached.

## Time Complexity

- **O(V²)**

## Space Complexity

- **O(V²)**

## Language Used

- C

## File

- `post.c`

## Learning Outcome

- Understood the concept of Depth-First Search (DFS).
- Learned how DFS can be applied to directed graphs.
- Learned how to find all reachable users from a starting node.
- Understood recursive graph traversal.

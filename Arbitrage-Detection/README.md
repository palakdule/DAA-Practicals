# Practical 09 - Arbitrage Detection using Bellman-Ford Algorithm

## Aim

To apply the **Bellman-Ford Algorithm** to detect negative weight cycles in a currency exchange graph, representing a potential arbitrage opportunity.

## Problem Statement

Currencies are modelled as graph vertices, while exchange rates are represented as weighted edges. The exchange rates are converted into negative logarithms so that multiplication of exchange rates is transformed into addition.

A negative weight cycle in the graph represents a potential risk-free arbitrage opportunity.

## Input Format

1. The first line contains an integer `V`, representing the number of vertices (currencies).
2. The second line contains an integer `E`, representing the number of edges (exchange rates).
3. The next `E` lines each contain three values:
   - `src` → source vertex
   - `dest` → destination vertex
   - `weight` → edge weight

## Output Format

- Print `Arbitrage Detected` if a negative weight cycle exists in the graph.
- Otherwise, print `No Arbitrage`.

## Algorithm

1. Initialize the distance of all vertices to `0`.
2. Relax all edges repeatedly for `V` iterations.
3. For each edge, check whether a shorter distance can still be obtained.
4. If an edge can still be relaxed after `V` iterations, a negative weight cycle exists.
5. Print `Arbitrage Detected` if a negative cycle is found.
6. Otherwise, print `No Arbitrage`.

## Time Complexity

- **O(V × E)**

## Space Complexity

- **O(V)**

## Language Used

- C

## File

- `arbitrageDetection.c`

## Sample Results

### Test Case 1

**Input:**

```text
3
3
0 1 0.5
1 2 0.5
2 0 0.5
```

**Output:**

```text
No Arbitrage
```

### Test Case 2

**Input:**

```text
3
3
0 1 0.2
1 2 0.3
2 0 -0.6
```

**Output:**

```text
Arbitrage Detected
```

## Learning Outcome

- Understood the Bellman-Ford Algorithm.
- Learned how to detect negative weight cycles.
- Understood how arbitrage opportunities can be represented using graph algorithms.
- Learned to identify potential arbitrage through negative cycle detection.

# Practical 07 - Travelling Salesman Problem

## Aim

To implement the **Travelling Salesman Problem (TSP)** using **Dynamic Programming** to determine the minimum possible travel cost for visiting all cities exactly once and returning to the starting city.

## Problem Statement

You are an engineer aboard an interplanetary spacecraft. The onboard navigation computer needs to plan the most efficient route for a delivery drone visiting multiple cities.

The drone starts from the headquarters (City 0), must visit every city exactly once, and finally return to the headquarters.

The objective is to find the **minimum total travel cost** using the **Dynamic Programming approach**.

## Algorithm

1. Start from City 0.
2. Maintain a set of visited cities using a bitmask.
3. For each unvisited city, calculate the cost of travelling to that city.
4. Recursively find the minimum cost for the remaining unvisited cities.
5. When all cities are visited, return to City 0.
6. Store previously calculated results using Dynamic Programming to avoid repeated calculations.
7. Return the minimum total travel cost.

## Time Complexity

- **O(n² × 2ⁿ)**

## Space Complexity

- **O(n × 2ⁿ)**

## Language Used

- C

## File

- `droneDeliveryCost.c`

## Sample Results

### Test Case 1

**Output:**
```text
80
```

### Test Case 2

**Output:**
```text
18
```

## Learning Outcome

- Understood the Travelling Salesman Problem.
- Learned how Dynamic Programming can be used to solve TSP.
- Understood the use of bitmasking for representing visited cities.
- Learned how to minimize the total travel cost of a route.

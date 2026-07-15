# Practical 3 - Binary Search (First Occurrence)

## Aim

To find the first occurrence of a given Archive ID in a sorted list using the Binary Search algorithm.

## Problem Statement

You are the chief archivist at Nalanda Mahavihara, where manuscripts are stored in sorted order using Archive IDs. Multiple copies of the same manuscript may exist, but the Rajguru must always receive the oldest preserved copy, represented by the first occurrence of the Archive ID. Implement Binary Search to efficiently locate the first occurrence.

## Algorithm

1. Read the number of Archive IDs.
2. Input the sorted Archive IDs.
3. Read the target Archive ID.
4. Apply Binary Search:
   - If the target is found, store its index and continue searching in the left half.
   - If the target is smaller, search the left half.
   - If the target is larger, search the right half.
5. Display the index of the first occurrence if found; otherwise, display "Scroll not found."

## Time Complexity

- Best Case: **O(1)**
- Average Case: **O(log n)**
- Worst Case: **O(log n)**

## Space Complexity

- **O(1)**

## Language Used

- C

## File

- `binary_search_first_occurrence.c`

## Learning Outcome

- Understood the Binary Search algorithm.
- Learned how to efficiently find the first occurrence of an element in a sorted array.
- Analyzed the time and space complexity of Binary Search.

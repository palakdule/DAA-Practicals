# Practical 2 - Quick Sort

## Aim

To sort a large, unsorted log file containing Unix timestamps using the Quick Sort algorithm so that the log entries are arranged chronologically for analysis.

## Problem Statement

A web server crashes, leaving behind a massive, unsorted log file of user requests with Unix timestamps. Sort these log entries chronologically so the DevOps team can trace the exact sequence of events leading to the failure.

## Algorithm

1. Read the number of log entries.
2. Input all Unix timestamps into an array.
3. Select the last element as the pivot.
4. Partition the array such that elements smaller than or equal to the pivot are placed before it.
5. Recursively apply Quick Sort to the left and right subarrays.
6. Display the timestamps in chronological order.

## Time Complexity

- Best Case: **O(n log n)**
- Average Case: **O(n log n)**
- Worst Case: **O(n²)**

## Space Complexity

- Average Case: **O(log n)** (recursive call stack)
- Worst Case: **O(n)**

## Language Used

- C

## File

- `quick_sort_log_entries.c`

## Learning Outcome

- Understood the working of the Quick Sort algorithm.
- Learned the partitioning technique using a pivot element.
- Analyzed the time and space complexity of Quick Sort.
- Applied sorting to a real-world log analysis scenario.

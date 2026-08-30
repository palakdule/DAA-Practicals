# Practical 08 - DNA Sequence Analysis using Longest Common Subsequence (LCS)

## Aim

To determine the length of the **Longest Common Subsequence (LCS)** between two DNA sequences using **Dynamic Programming**, which helps identify common genetic traits and evolutionary links.

## Problem Statement

You are a bioinformatics scientist comparing DNA samples from two species found in the Western Ghats.

The task is to determine the length of the Longest Common Subsequence (LCS) between two DNA sequences.

## Input Format

- The first line contains a string `X`, representing the DNA sequence of the first species.
- The second line contains a string `Y`, representing the DNA sequence of the second species.

## Output Format

- Print a single integer representing the length of the Longest Common Subsequence (LCS) between `X` and `Y`.
- If no common subsequence exists, print `0`.

## Algorithm

1. Read the two DNA sequences `X` and `Y`.
2. Find their lengths `m` and `n`.
3. Create a DP table `L[m+1][n+1]`.
4. Initialize the first row and first column with `0`.
5. If the current characters match, add `1` to the diagonal value.
6. If they do not match, take the maximum value from the top and left cells.
7. The value at `L[m][n]` gives the length of the LCS.
8. Print the result.

## Time Complexity

- **O(m × n)**

## Space Complexity

- **O(m × n)**

## Language Used

- C

## File

- `sequenceAnalysis.c`

## Sample Results

### Test Case 1

**Input:**
```text
ABCBDAB
BDCAB
```

**Output:**
```text
4
```

### Test Case 2

**Input:**
```text
ABC
DEF
```

**Output:**
```text
0
```

## Learning Outcome

- Understood the concept of Longest Common Subsequence.
- Learned how Dynamic Programming can be used to solve LCS.
- Understood the use of a DP table for storing intermediate results.
- Learned how LCS can be applied to DNA sequence analysis.

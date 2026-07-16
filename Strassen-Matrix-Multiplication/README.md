# Practical 4 - Strassen Matrix Multiplication

## Aim

To implement Strassen's Divide and Conquer Matrix Multiplication algorithm for multiplying two 2×2 matrices efficiently.

## Problem Statement

You are an engineer aboard an interplanetary spacecraft. The onboard navigation computer performs extremely fast matrix calculations to adjust flight trajectories in real time. To reduce computational load and fuel consumption, the navigation system uses Strassen's Divide and Conquer Matrix Multiplication algorithm.

Given two 2×2 navigation matrices, compute their product using Strassen's method.

## Algorithm

1. Read the elements of two 2×2 matrices.
2. Compute the seven intermediate products (M1 to M7) using Strassen's formulas.
3. Calculate the elements of the resultant matrix using the intermediate products.
4. Display the product matrix.

## Time Complexity

- **O(n²·⁸¹)** (approximately **O(n^2.81)**)

> For this implementation (2×2 matrices), the execution time is constant, but Strassen's algorithm is generally analyzed as **O(n^2.81)** for larger matrices.

## Space Complexity

- **O(n²)**

## Language Used

- C

## File

- `strassen_matrix_multiplication.c`

## Learning Outcome

- Understood the Divide and Conquer approach used in Strassen's algorithm.
- Learned how matrix multiplication can be optimized by reducing the number of multiplications.
- Compared Strassen's algorithm with the conventional matrix multiplication method.

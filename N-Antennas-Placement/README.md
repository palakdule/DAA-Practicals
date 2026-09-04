# 📡 Practical 11: N-Antennas Placement Problem

## 🎯 Aim

To solve the N-Antennas Placement Problem using the **Backtracking technique** by placing N antennas on an N × N grid without causing interference.

## 📌 Problem Statement

An N-Antennas Placement Problem requires placing N antennas on an N × N grid such that no two antennas are placed in the same row, column, or diagonal. The problem is modeled using the **N-Queens approach** and solved using Backtracking.

## 🔄 Algorithm

1. Start placing antennas column by column.
2. Check whether the selected position is safe.
3. Verify that no antenna is present in the same row.
4. Check the upper-left diagonal for another antenna.
5. Check the lower-left diagonal for another antenna.
6. If the position is safe, place an antenna and move to the next column.
7. If no valid position is available, backtrack and remove the previously placed antenna.
8. Continue until all N antennas are placed successfully or no solution exists.

## ⏱️ Time Complexity

- Worst Case: **O(N!)**

## 💾 Space Complexity

- **O(N²)** for the board
- **O(N)** for the recursion stack

## 💻 Language Used

- C

## 📄 File

- `antennaNetworking.c`

## 🎓 Learning Outcome

This practical helps in understanding the **Backtracking technique** and its application to constraint-based placement problems. It demonstrates how valid solutions can be found by making choices, checking constraints, and backtracking when necessary.

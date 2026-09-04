# 📡 N-Antennas Placement Problem

## 🎯 Aim

To place N antennas on an N × N grid such that no two antennas share the same row, column, or diagonal using the Backtracking technique.

## 📌 Problem Statement

The N-Antennas Placement Problem is modeled as the classic N-Queens Problem. The objective is to place N antennas on an N × N grid while avoiding electromagnetic interference by ensuring that no two antennas occupy the same row, column, or diagonal.

## 🔄 Algorithm

1. Start placing antennas column by column.
2. Check whether the current position is safe.
3. Verify that no antenna exists in the same row.
4. Check both upper-left and lower-left diagonals.
5. If the position is safe, place an antenna.
6. Recursively place antennas in the next column.
7. If no valid position is found, backtrack and try another position.
8. If all antennas are placed successfully, print the solution.

## ⏱️ Time Complexity

- Worst Case: **O(N!)**

## 💾 Space Complexity

- **O(N²)** for the board and **O(N)** for recursion stack.

## 💻 Language Used

- C

## 📄 File

- `antennaNetworking.c`

## 🎓 Learning Outcome

This practical demonstrates the use of the Backtracking technique to solve the N-Queens problem and understand constraint-based placement problems.

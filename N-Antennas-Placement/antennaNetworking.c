#include <stdio.h>
#include <stdbool.h>

#define MAX 20

int board[MAX][MAX];

bool isSafe(int row, int col, int N) {
    for (int j = 0; j < col; j++) {
        if (board[row][j])
            return false;
    }

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j])
            return false;
    }

    for (int i = row + 1, j = col - 1; i < N && j >= 0; i++, j--) {
        if (board[i][j])
            return false;
    }

    return true;
}

bool solveNQueens(int col, int N) {
    if (col >= N)
        return true;

    for (int row = 0; row < N; row++) {
        if (isSafe(row, col, N)) {
            board[row][col] = 1;

            if (solveNQueens(col + 1, N))
                return true;

            board[row][col] = 0;
        }
    }

    return false;
}

void printSolution(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 1)
                printf("A");
            else
                printf(".");
        }
        printf("\n");
    }
}

int main() {
    int N;

    printf("antennas(N): ");
    scanf("%d", &N);

    if (N <= 0 || N > MAX) {
        printf("Invalid\n");
        return 0;
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            board[i][j] = 0;

    if (solveNQueens(0, N)) {
        printf("Successful Placement\n");
        printSolution(N);
    } else {
        printf("No solution exists");
    }

    return 0;
}

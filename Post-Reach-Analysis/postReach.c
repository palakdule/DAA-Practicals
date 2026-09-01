#include <stdio.h>
#include <stdbool.h>

#define MAX_USERS 100

int graph[MAX_USERS][MAX_USERS];
bool visited[MAX_USERS];
int totalReach = 0;

void dfs(int user, int n) {
    visited[user] = true;
    printf("%d\n", user);
    totalReach++;

    for (int i = 0; i < n; i++) {
        if (graph[user][i] == 1 && !visited[i]) {
            dfs(i, n);
        }
    }
}

int main() {
    int n, e, startUser;

    printf("users: ");
    scanf("%d", &n);

    printf("edges: ");
    scanf("%d", &e);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
        visited[i] = false;
    }

    printf("relationships:\n");

    for (int i = 0; i < e; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
    }

    printf("user ID: ");
    scanf("%d", &startUser);

    dfs(startUser, n);

    printf("Total: %d\n", totalReach);

    return 0;
}

#include <stdio.h>

int graph[20][20];
int color[20];
int V, M;

int isSafe(int vertex, int c) {
    for (int i = 0; i < V; i++) {
        if (graph[vertex][i] && color[i] == c)
            return 0;
    }
    return 1;
}

int graphColoring(int vertex) {
    if (vertex == V)
        return 1;

    for (int c = 1; c <= M; c++) {
        if (isSafe(vertex, c)) {
            color[vertex] = c;

            if (graphColoring(vertex + 1))
                return 1;

            color[vertex] = 0;
        }
    }

    return 0;
}

int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter number of edges: ");
    int E;
    scanf("%d", &E);

    for (int i = 0; i < V; i++) {
        color[i] = 0;
        for (int j = 0; j < V; j++)
            graph[i][j] = 0;
    }

    printf("Enter edges:\n");
    for (int i = 0; i < E; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    printf("Enter number of colors: ");
    scanf("%d", &M);

    if (graphColoring(0)) {
        printf("Graph can be colored using %d colors.\n", M);

        printf("Color assigned to each vertex:\n");
        for (int i = 0; i < V; i++)
            printf("Vertex %d -> Color %d\n", i, color[i]);
    } else {
        printf("Graph cannot be colored using %d colors.\n", M);
    }

    return 0;
}

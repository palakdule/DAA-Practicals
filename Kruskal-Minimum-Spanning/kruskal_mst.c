#include <stdio.h>
#include <stdlib.h>

struct Edge {
    int u, v, w;
};

int parent[100005];

int find(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

void unionSet(int a, int b) {
    parent[find(a)] = find(b);
}

int compare(const void *a, const void *b) {
    return ((struct Edge *)a)->w - ((struct Edge *)b)->w;
}

int main() {
    int V, E;

    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &V, &E);

    struct Edge edges[E];

    printf("Enter source, destination and weight:\n");
    for (int i = 0; i < E; i++) {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    for (int i = 0; i < V; i++) {
        parent[i] = i;
    }

    qsort(edges, E, sizeof(struct Edge), compare);

    int mstCost = 0;

    for (int i = 0; i < E; i++) {
        int u = edges[i].u;
        int v = edges[i].v;

        if (find(u) != find(v)) {
            mstCost += edges[i].w;
            unionSet(u, v);
        }
    }

    printf("Minimum Cost of MST = %d\n", mstCost);

    return 0;
}

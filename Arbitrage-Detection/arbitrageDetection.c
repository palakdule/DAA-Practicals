#include <stdio.h>
#include <stdlib.h>
#include <float.h>

struct Edge {
    int src, dest;
    double weight;
};

struct Graph {
    int V, E;
    struct Edge* edge;
};

void detectArbitrage(struct Graph* graph, int src) {
    int V = graph->V;
    int E = graph->E;
    double dist[V];

    for (int i = 0; i < V; i++)
        dist[i] = 0;

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < E; j++) {
            int u = graph->edge[j].src;
            int v = graph->edge[j].dest;
            double w = graph->edge[j].weight;

            if (dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
        }
    }

    for (int j = 0; j < E; j++) {
        int u = graph->edge[j].src;
        int v = graph->edge[j].dest;
        double w = graph->edge[j].weight;

        if (dist[u] + w < dist[v]) {
            printf("Arbitrage Detected\n");
            return;
        }
    }

    printf("No Arbitrage\n");
}

int main() {
    int V, E;

    printf("vertices: ");
    scanf("%d", &V);

    printf("Edges: ");
    scanf("%d", &E);

    struct Graph* graph =
        (struct Graph*)malloc(sizeof(struct Graph));

    graph->V = V;
    graph->E = E;

    graph->edge =
        (struct Edge*)malloc(E * sizeof(struct Edge));

    for (int i = 0; i < E; i++) {
        scanf("%d %d %lf",
              &graph->edge[i].src,
              &graph->edge[i].dest,
              &graph->edge[i].weight);
    }

    detectArbitrage(graph, 0);

    free(graph->edge);
    free(graph);

    return 0;
}

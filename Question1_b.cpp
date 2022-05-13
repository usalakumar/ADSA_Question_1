#include <stdio.h>
#include <stdlib.h>
#define MAX_NODE 10

int parent[MAX_NODE];
int find(int i) {
    while (parent[i])
        i = parent[i];
    return i;
}

int uni(int i, int j) {
    if (i != j) {
        parent[j] = i;
        return 1;
    }
    return 0;
}

int main() {
    int a, b, u, v, ne = 1;
    int min, mincost = 0;
    int i, j;
    int cost[MAX_NODE][MAX_NODE];
    int num_of_nodes;
    printf("Kruskal's algorithm in C\n");
    printf("========================\n");
    printf("Enter the no. of vertices:");
    scanf("%d", &num_of_nodes);

    printf("\nEnter the cost adjacency matrix:\n");
    for (i = 1; i <= num_of_nodes; i++) {
        for (j = 1; j <= num_of_nodes; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }
    
    printf("The edges of Minimum Cost Spanning Tree are\n");
    while (ne < num_of_nodes) {
        for (i = 1, min = 999; i <= num_of_nodes; i++) {
            for (j = 1; j <= num_of_nodes; j++) {
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }
        
        u = find(u);
        v = find(v);
        
        if (uni(u, v)) {
            printf("%d edge (%d,%d) =%d\n", ne++, a, b, min);
            mincost += min;
        }        
        cost[a][b] = cost[b][a] = 999;
    }    
    printf("\nMinimum cost = %d\n", mincost);
    return 0;
}

#include<stdio.h>
#define MAX_NODE 10

int main() {
    int a, b, u, v, ne = 1;
    int i, j;
    int num_of_nodes;
    int min, mincost = 0;
    int cost[MAX_NODE][MAX_NODE];
    int visited[MAX_NODE] = {0};

	printf("\nEnter the number of nodes:"); 
	scanf("%d",&num_of_nodes); 
	printf("\nEnter the adjacency matrix:\n");
	for(i = 1; i <= num_of_nodes; i++) {
	    for(j = 1; j <= num_of_nodes; j++) {
		    scanf("%d", &cost[i][j]);             
		    if(cost[i][j] == 0)
			    cost[i][j] = 999;
	    }
    }
	visited[1] = 1; 
	printf("\n");
 
	while(ne < num_of_nodes) { 
		for(i = 1, min = 999; i <= num_of_nodes; i++) {
		    for(j = 1; j <= num_of_nodes; j++) {
                if(cost[i][j] < min) {
		            if(visited[i] != 0) { 
			            min = cost[i][j]; 
                        a = u = i; 
                        b = v = j;
                    }
                }
            }
        }
 
		if(visited[u] == 0 || visited[v] == 0) {
			printf("\n Edge %d:(%d %d) cost:%d", ne++, a, b, min); 
			mincost += min; 
			visited[b] = 1; 
		}
		cost[a][b] = cost[b][a] = 999; 
	}
	printf("\n Minimun cost=%d\n", mincost); 
}

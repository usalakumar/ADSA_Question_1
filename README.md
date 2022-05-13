Compilation Step
gcc Question1_a.cpp -o prims
gcc Question1_b.cpp -o kruskals


PRIM'S Algorithm Sample Output

Enter the number of nodes:6
Enter the adjacency matrix:
0 3 1 6 0 0
3 0 5 0 3 0
1 5 0 5 6 4
6 0 5 0 0 2
0 3 6 0 0 6
0 0 4 2 6 0
Edge 1:(1 3) cost:1
Edge 2:(1 2) cost:3
Edge 3:(2 5) cost:3
Edge 4:(3 6) cost:4
Edge 5:(6 4) cost:2
Minimun cost=13s

Kruskal Algorithm Sample Output

Enter the no. of vertices:6
Enter the cost adjacency matrix:
0 3 1 6 0 0
3 0 5 0 3 0
1 5 0 5 6 4
6 0 5 0 0 2
0 3 6 0 0 6
0 0 4 2 6 0
The edges of Minimum Cost Spanning Tree are
1 edge (1,3) =1
2 edge (4,6) =2
3 edge (1,2) =3
4 edge (2,5) =3
5 edge (3,6) =4
Minimum cost = 13


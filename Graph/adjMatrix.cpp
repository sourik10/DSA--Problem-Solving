#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; //n = no of nodes, m = no edges 
	cin>>n>>m; 
	
	// declare the adjacent matrix ; size[n+1] for 1-based indexing 
  //adjacency matrix -> time complexity O(n*n) 
	int adj[n+1][n+1]; 
	
	// take edges as input (m =no of edges)
	for(int i = 0;i<m;i++) {
	    int u, v; 
	    cin >> u >> v;
	    adj[u][v] = 1; 
	    adj[v][u] = 1; 
	}
	return 0;
}

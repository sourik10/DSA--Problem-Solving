#include <bits/stdc++.h>
using namespace std;

//adjacency list --->time complexity = O(n+m)

int main() {
	int n, m; // n = no of nodes, m = no of edges
	cin >> n >> m; 
	
	// declare the adjacent list
	vector<int> adj[n+1]; 
	
	// take edges as input (m = no of edges)
	for(int i = 0;i<m;i++) {
	    int u, v; 
	    cin >> u >> v;
	    adj[u].push_back(v); 
	    adj[v].push_back(u); 
	}
	return 0;
}

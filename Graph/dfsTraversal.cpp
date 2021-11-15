#include <bits/stdc++.h>
using namespace std;

//DFS traversal using Adjacency List Technique--->Depth search using Recursion
//time comlexity = O(N+E), N for visiting N nodes && E for travelling adjacent nodes
//space complexity = O(N+E) + O(N) + O(N)

class Solution {
    void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs) {
        storeDfs.push_back(node); 
        vis[node] = 1; 
        for(auto it : adj[node]) {
            if(!vis[it]) {
                dfs(it, vis, adj, storeDfs); 
            }
        }
    }
public:
	vector<int>dfsGraph(int V, vector<int> adj[]){
	    vector<int> storeDfs; 
	    vector<int> vis(V+1, 0); 
      for(int i=0;i<V;i++) {
        if(!vis[i]) dfs(i, vis, adj, storeDfs); 
      }
	    return storeDfs; 
	}
};

int main() {
	int n, e; // n = no of nodes, e = no of edges
	cin >> n>> e; 
	
	// declare the adjacent list
	vector<int> adj[n+1]; 
	//takeinput for edges(e)
	for(int i = 0;i<e;i++) {
	    int u, v; 
	    cin >> u >> v;
	    adj[u].push_back(v); 
	    adj[v].push_back(u);  //for directed-graph comment this line bcoz (u,v) !=(v,u)
	}

	Solution abc;
	vector<int> final;
	final=abc.dfsGraph(n,adj);
	for(auto m: final){
		cout<<m<<"->";
	}


	return 0;
}

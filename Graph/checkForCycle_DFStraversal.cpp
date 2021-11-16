#include <bits/stdc++.h>
using namespace std;

//cycle detection using dfs traversal technique
//time complexity = O(N)
//space complexity 
class Solution {
public:
  
	bool checkForCycle(int node, int parent, vector<int> &vis, vector<int> adj[]) {

        vis[node] = 1; 
        for(auto it: adj[node]) {
            if(!vis[it]) {
                if(checkForCycle(it, node, vis, adj)) 
                    return true; 
            }
            else if(it!=parent) 
                return true; 
        }
        
        return false; 
    }

	bool isCycle(int V, vector<int>adj[]){
	    vector<int> vis(V, 0); 
	    for(int i = 0;i<V;i++) {
	        if(!vis[i]) {
	            if(checkForCycle(i, -1,vis,adj)) return true; 
	        }
	    }
	    
	    return false; 
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
	bool answer=abc.isCycle(n,adj);
	if(answer){
		cout<<"yes cycle"<<endl;
	}
	else cout<<"no cycle"<<endl;

	return 0;
}

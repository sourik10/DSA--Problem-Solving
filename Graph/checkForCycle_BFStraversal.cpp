#include <bits/stdc++.h>
using namespace std;

//BFS traversal using Adjacency List Technique--->level order traversal
//time comlexity = O(N+E)
//space complexity = O(N)

class Solution {
public:

	bool checkForCycle(int s, int V, vector<int> adj[], vector<int>& visited)
    {

        // Create a queue for BFS
        queue<pair<int,int>> q;
     
        visited[s] = true;
        q.push({s, -1});
     
        while (!q.empty()) {
     
            int node = q.front().first;
            int par = q.front().second;
            q.pop();
     
            for (auto it : adj[node]) {
                if (!visited[it]) {
                    visited[it] = true;
                    q.push({it, node});
                }
                else if (par != it)
                    return true;
            }
        }
        return false;
    }


	bool isCycle(int V, vector<int>adj[]){
	    vector<int> vis(V, 0); 
	    for(int i = 0;i<V;i++) {
	        if(!vis[i]) {
	            if(checkForCycle(i, V, adj, vis)) return true; 
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

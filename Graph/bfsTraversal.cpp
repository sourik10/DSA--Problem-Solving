#include <bits/stdc++.h>
using namespace std;

//BFS traversal using Adjacency List Technique--->level order traversal
//time comlexity = O(N+E)
//space complexity = O(N)

class Solution{
public:
	vector<int>bfsGraph(int v,vector<int>adj[]){
		vector<int> bfs; 
		queue<int>q;
		vector<int> temp(v+1,0);

		//source node starting from 0 , ending at (v-1)
		for(int i=0;i<v;i++){

			if(!temp[i]){
				q.push(i);
				temp[i]=1;
				while(q.empty()==false){
					int node=q.front();
					q.pop();
					bfs.push_back(node);

					for(auto x: adj[i]){
						if(!temp[x]){
							q.push(x);
							temp[x]=1;
						}
					}
				}
		}
	}return bfs;
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
	final=abc.bfsGraph(n,adj);
	for(auto m: final){
		cout<<m<<"->";
	}


	return 0;
}

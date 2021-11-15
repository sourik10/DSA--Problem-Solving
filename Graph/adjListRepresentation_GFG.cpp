#include<bits/stdc++.h>
using namespace std;

void addEdge(vector <int>adj[],int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void print(vector<int> adj[],int V){
	for(int i=0;i<V;i++){
		cout<<"vertex:"<<i<<"->";
		for(auto x:adj[i]){
			cout<<x<<"->";
		}
		cout<<endl;
	}
}

int main(){
	int v=5;
	vector<int>adj[v];
	addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);


    print(adj,v);

}

#include<bits/stdc++.h>
using namespace std;

void dfsRec(vector<int>adj[],int s,bool visited[]){
	visited[s]=true;
	cout<<s<<"->";

	for(auto x:adj[s]){
		if(visited[x]==false)
			dfsRec(adj,x,visited);
	}
}

void DFS(vector<int> adj[],int v,int s){
	bool visited[v];
	for(int i=0;i<v;i++){
		visited[i]=false;
	}
	dfsRec(adj,s,visited);
}

void BFS(vector<int> adj[],int v,int s){
	bool visited[v];
	for(int i=0;i<v;i++){
		visited[i]=false;
	}
	queue<int> q;
	visited[s]=true;
	q.push(s);

	while(!q.empty()){
		int u=q.front();
		q.pop();
		cout<<u<<"->";
		for(auto x:adj[u]){
			if(visited[x]==false){
				visited[x]=true;
				q.push(x);
			}
		}
	}

}

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
    cout<<endl;

    cout<<"BFS TRAVERSAL: "; BFS(adj,v,0);

    cout<<endl<<"DFS TRAVERSAL: "; DFS(adj,v,0);


}

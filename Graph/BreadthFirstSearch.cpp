#include<bits/stdc++.h>
using namespace std;
void BFS(vector<int> adj[],int V,int s){
    bool visited[V+1];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    queue<int>q;
    visited[s]=true;
    q.push(s);
    while(q.empty()==false){
        int n=q.front();
        q.pop();
        cout<<n<<" ";
        for(int v:adj[n]){
            if(visited[v] ==false){
                visited[v]=true;
                q.push(v);
            }
        }
    }
}
void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3);
	addEdge(adj,3,4);
	addEdge(adj,2,4);

	cout << "Following is Breadth First Traversal: "<< endl; 
	BFS(adj,V,0); 

}
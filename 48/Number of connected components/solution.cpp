#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
int vis[100001];

void dfs(int src){
	vis[src] = 1;
	for(auto child:adj[src]){
		if(!vis[child]){
			dfs(child);
		}
	}
}

int main(){
	int n,e;
	cin>>n>>e;
	//vector<int> adj[n];
	for(int i=0;i<e;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	int cnt=0;
	//vector<int> visited(n,0);
	//for(int i=0;i<n;i++){
	//	visited.push_back(0);
	//}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i);
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
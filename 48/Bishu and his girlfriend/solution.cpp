/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
int vis[1001],dist[1001];

void dfs(int src,int d){
	vis[src] = 1;
	dist[src]=d;
	for(auto child:adj[src]){
		if(!vis[child]){
			dfs(child,dist[child]+1);
		}
	}
}

int main(){
	int n,e;
	cin>>n;
	//vector<int> adj[n];
	for(int i=0;i<n-1;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	dfs(1,0);
	int q;
	cin>>q;
	int ans= -1, min_dist=INT_MAX;
	while(q--){
		int city;
		cin>>city;
		if(dist[city]<min_dist){
			ans=city,min_dist=dist[city];
		}
		else{
			if(dist[city]==min_dist && city<ans){
				ans=city;
			}
		}
	}
	cout<<ans;
	return 0;
}
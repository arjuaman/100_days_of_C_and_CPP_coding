#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define debug(n1) cout << n1 << endl
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

vector<int> ar[10000];
int vis[10000];

void dfs(int src){
	vis[src]=1;
	cout<<src<<" \n";
	for(int child:ar[src]){
		if(!vis[child])
			dfs(child);
	}
}

int main() {
	
	SPEED;
	int a,b,m,n;
	ar[1].pb(2);
	ar[2].pb(1);
	ar[3].pb(2);
	ar[2].pb(3);
	ar[4].pb(2);
	ar[2].pb(4);
	ar[5].pb(4);
	ar[4].pb(5);
	ar[4].pb(6);
	ar[6].pb(4);
	
	for(int i=1;i<=6;i++){
		if(!vis[i])
			dfs(i);
	}
	return 0;
}



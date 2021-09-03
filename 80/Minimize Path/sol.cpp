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

int main() {
	
	SPEED;
	vector<vector<int>> cost = {{1,1,3},{2,3,1},{4,6,1}};
	int row=cost.size(), col=cost[0].size();
	
	vector<vector<int>> dp(row, vector<int>(col, 0));
	dp[0][0] = cost[0][0];
	
	for(int i=1;i<row;i++)
		dp[i][0] = dp[i-1][0] + cost[i][0];
		
	for(int j=1;j<col;j++)
		dp[0][j] = dp[0][j-1] + cost[0][j];
		
	for(int i=1;i<row;i++){
		for(int j=1;j<col;j++){
			dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + cost[i][j];
		}
	}
	
	cout<<"Minimum cost is: "<<dp[row-1][col-1];
	
	return 0;
}



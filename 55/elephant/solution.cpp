#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
int minSteps(int n){
	if(n==1 || n==2 || n==3 || n==4 || n==5)
		return 1;
	/*int for1 = minSteps(n-1)+1;
	int for2 = minSteps(n-2)+1;
	int for3 = minSteps(n-3)+1;
	int for4 = minSteps(n-4)+1;
	int for5 = minSteps(n-5)+1;
	return min(for5,min(for4,min(for3,min(for2,for1))));
	*/
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=n;i++){
		if(i==1 || i==2 || i==3 || i==4 || i==5)
			dp[i]=1;
		else
			dp[i] = min(dp[i-1]+1,min(dp[i-2]+1,min(dp[i-3]+1,min(dp[i-4]+1,dp[i-5]+1))));
	}
	return dp[n];	
}
int main() {
	SPEED;
	int t;
	cin>>t;
	cout<<minSteps(t)<<"\n";
	return 0;
}


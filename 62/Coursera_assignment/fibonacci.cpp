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
void multiply(int mat[2][2], int f[2][2]){
	int x1 = mat[0][0]*f[0][0]+mat[0][1]*f[1][0];
	int x2 = mat[0][0]*f[0][1]+mat[0][1]*f[1][1];
	int x3 = mat[1][0]*f[0][0]+mat[1][1]*f[1][0];
	int x4 = mat[1][0]*f[0][1]+mat[1][1]*f[1][1]; 
	mat[0][0]=x1;
	mat[0][1]=x2;
	mat[1][0]=x3;
	mat[1][1]=x4;
}

int main() {
	
	SPEED;
	int n;
	cin>>n;
	int arr[2][2] = {{1,1},{1,0}};
	int f[2][2] = {{1,1},{1,0}};
	for(int i=1;i<n-1;i++){
		multiply(arr,f);
	}
	cout<<arr[0][0]<<" \n";
	return 0;
}



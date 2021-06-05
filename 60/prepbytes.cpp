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
int cnt=0;
int lightsOff(vector<int> arr, int q=0){
	int n = arr.size();
	if(q==0){
		for(int i=1;i<n-1;i++){
			if(arr[i-1]==1 && arr[i+1]==1 && arr[i]==0){
				arr[i+1]=0;
				//cnt++;
				cnt = min(1+lightsOff(arr,0),lightsOff(arr,1));
			}
		}
	}
	else if(q==1){
		for(int i=1;i<n-1;i++){
			if(arr[i-1]==1 && arr[i+1]==1 && arr[i]==0){
				arr[i-1]=0;
				//cnt++;
				cnt = min(lightsOff(arr,0),1+lightsOff(arr,1));
			}
		}
	}
	
	return cnt;
}
int main() {
	
	SPEED;
//	int t;
//	cin>>t;
//	vector<int> arr(t);
//	for(int i=0;i<10;i++){
//		cin>>arr[i];
//	}
	vector<int> arr = {1,1,0,1,1,0,1,0,1,0};  //1100100010
//	vector<int> arr = {1,1,1};
	cout<<lightsOff(arr,0);
	return 0;
}



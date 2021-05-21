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
bool checkTwoSum(vector<int> &arr, int n, int k){
	multiset<int> set;
	for(int i=0;i<n;i++)
		set.insert(arr[i]);
	
	for(int i=0;i<n;i++){
		int cur = arr[i];
		int rem = k - cur;
		if(set.count(rem))
			return true;
	}
	return false;
}
int main() {
	/*
	[1, 3, 8, 2], k = 10, return true (8 + 2)
	[3, 9, 13, 7], k = 8, return false
	[4, 2, 6, 5, 2], k = 4, return true (2 + 2)
	*/
	SPEED;
		cout<<"Enter size: ";
		int n;
		cin>>n;
		vector<int> arr(n);
		cout<<"\nEnter elements: ";
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int k ;
		cout<<"\nEnter k: ";cin>>k;cout<<endl;
		if(checkTwoSum(arr,n,k))
			cout<<"Yes\n";
		else
			cout<<"No\n";
	return 0;
}



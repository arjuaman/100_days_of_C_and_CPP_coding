#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int> arr,int n,int m){
	sort(arr.begin(),arr.end());
	if(m==n) 
		return arr[m-1]-arr[0];
	int mindiff=INT_MAX;
	// 1 1 1 2 4 13 19
	// n-m = 3
	for(int i=0;i<=n-m;i++){
		mindiff = min(mindiff, arr[i+m-1]-arr[i]);
	}
	return mindiff;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	    	cin>>arr[i];
		}
		int buy;
		cin>>buy;
		cout<<findMin(arr,n,buy)<<"\n";
	}
	return 0;
}


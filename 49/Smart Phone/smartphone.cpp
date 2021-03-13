#include <bits/stdc++.h>
using namespace std;
static bool comp(int a,int b){
	return a>b; //desc
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	// 30 20 53 14
	if(n!=1){
	long long rev=INT_MIN;
	sort(arr,arr+n,comp);
	// 53 30 20 14
	for(int i=0;i<n;i++){
		rev = max(rev, (i+1)*arr[i]);
	}
	cout<<rev<<"\n";
	}
	else{
	    cout<<arr[0]<<"\n";
	}
	return 0;
}

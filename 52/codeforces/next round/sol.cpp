#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
int main() {
	// your code goes here
	SPEED;
	int n,k;
	cin>>n>>k;
	int cnt=0, zero=0;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==0)
			zero++;
	}
	//kth highest finisher is:
	int fin = arr[k-1];
	if(zero==n)
		cout<<0<<"\n";
	else{
		for(int i=0;i<n;i++){
			if(arr[i]>=fin && arr[i]>0)
				cnt++;
		}
		cout<<cnt<<"\n";
	}
	//cout<<cnt<<"\n";
	return 0;
}


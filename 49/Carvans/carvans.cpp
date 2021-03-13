#include <bits/stdc++.h>
using namespace std;
#define long long ll
int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    ll arr[n];
	    for(int i=0;i<n;i++)
	    	cin>>arr[i];
	    ll cnt=1,flag=0;
		if(n==1)	
			cout<<1<<"\n";
		else{
			ll temp = arr[0];
			for(int i=1;i<n;i++){
				if(arr[i]>temp){
					cnt += 1;
				}
				temp=arr[i];
			}
			cout<<cnt<<"\n";
		}
	}
	return 0;
}


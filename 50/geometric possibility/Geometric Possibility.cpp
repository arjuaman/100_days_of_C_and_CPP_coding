#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n,0);
	    int sum=0;
	    for(int i=0;i<n;i++){
	    	cin>>arr[i];
	    	sum += arr[i];
		}
		int flag=0;
		sort(arr.begin(),arr.end());
		for(int i=n-1;i>=0;i--){
			int rem = sum-arr[i];
			if(rem <= arr[i]){
				flag=1;break;
			}
		}
		if(flag==1)
			cout<<"No\n";
		else
			cout<<"Yes\n";
	}
	return 0;
}


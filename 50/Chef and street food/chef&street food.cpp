#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int profit=INT_MIN;
		while(n--){
			int s,p,v;
		    cin>>s>>p>>v; // 4 6 8.  2 6 6.  1 4 3
			int s_dash = s+1;
			profit = max(profit, v*(p/s_dash));
		}
	    cout<<profit<<"\n";
	}
	return 0;
}


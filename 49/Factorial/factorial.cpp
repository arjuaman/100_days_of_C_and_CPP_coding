#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int cnt=0;
		while(n>0){
			int temp = n/5;
			cnt += temp;
			n = n/5;
		}	
		cout<<cnt<<"\n";
	}	
	return 0;
}


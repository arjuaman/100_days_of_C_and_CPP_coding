#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int g;
		cin>>g;
		while(g--){
			int i,n,q;
			// i = 1 is head. 2 is tail
			// q = 1 guess head, 2 guess tail
			// 1 to n 
			cin>>i>>n>>q; //1 5 1 
			if(n%2==0){
				cout<<n/2<<"\n";
			}
			else{
				if(i!=q)
					cout<<(n+1)/2<<"\n";
				else
					cout<<(n-1)/2<<"\n";
			}
		}
	}	
	return 0;
}


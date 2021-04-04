#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
int main() {
	// your code goes here
	SPEED;
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.length();
	    if(n<=10)
	    	cout<<s<<"\n";
	    else{
	    	string ans="";
	    	ans+=s[0];
	    	ans+=to_string(n-2);
	    	ans+=s[n-1];
	    	cout<<ans<<"\n";
		}
	}
	return 0;
}


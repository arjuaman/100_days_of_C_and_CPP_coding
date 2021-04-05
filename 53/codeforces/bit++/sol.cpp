#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
void to_lower(string &s) {        
    for(char &c : s)
        c = tolower(c);
}
int main() {
	// your code goes here
	SPEED;
	int t;
	cin>>t;
	int val=0;
	while(t--){
	    string s;
	    cin>>s;
	    if(s[1]=='+')
	    	val++;
	    else
	    	val--;
	}
	cout<<val<<"\n";
	return 0;
}


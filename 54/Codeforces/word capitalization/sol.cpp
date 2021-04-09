#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
string to_upper(string s) {        
    for(char &c : s){
        c = toupper(c);
        return s;
    }
    return s;
}
int main() {
	// your code goes here
	SPEED;
	int t;
	string s;
	cin>>s;
	int n = s.length();
	s = to_upper(s);
	cout<<s<<"\n";

	return 0;
}


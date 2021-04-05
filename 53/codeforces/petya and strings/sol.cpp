#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
void to_lower(string &s) {        
    for(char &c : s)
        c = tolower(c);
    //return s;
}
int main() {
	// your code goes here
	SPEED;
	string s1,s2;
	cin>>s1>>s2;
	to_lower(s1);
	to_lower(s2);
	cout<<s1.compare(s2)<<"\n";
	return 0;
}


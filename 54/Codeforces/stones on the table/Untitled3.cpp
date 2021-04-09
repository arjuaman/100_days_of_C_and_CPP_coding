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
	string s;
	cin>>s;
	stack<char> st;
	int cnt=0;
	for(int i=0;i<t;i++){
		if(st.empty()){
			st.push(s[i]);
		}
		else if(s[i]==st.top()){
			cnt++;
		}
		else{
			st.push(s[i]);
		}
	}
	cout<<cnt<<"\n";
	return 0;
}


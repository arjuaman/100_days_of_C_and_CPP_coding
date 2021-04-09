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
	string s;
	cin>>s;
	unordered_set<char> uset;
	for(int i=0;i<s.length();i++){
		uset.insert(s[i]);
	}
	int n = uset.size();
	if(n%2==0){
		cout<<"CHAT WITH HER!\n";
	}
	else{
		cout<<"IGNORE HIM!\n"; 
	}
	return 0;
}


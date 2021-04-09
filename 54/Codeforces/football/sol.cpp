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
	string s;
	cin>>s;
	int n=s.length();
	int flag=0;
	for(int i=0;i<n-1;i++){
		int cnt=1;
		if(s[i+1]==s[i]){
			while(i<n-1 && s[i+1]==s[i]){
				cnt++;
				i++;
			}
		}
		if(cnt>=7){
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}


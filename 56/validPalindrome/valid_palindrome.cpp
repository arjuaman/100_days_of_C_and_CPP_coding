#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define debug(n1) cout << n1 << endl
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void to_lower(string &s) {
    for(char &c : s)
        c = tolower(c);
	//return s;
}

bool checkPal(string s){
	if(s.length()<=1)
		return true;
	int n = s.length();
	int i=0,j=n-1;
	while(i<j){
		while(!isalnum(s[i]) && i<j)
			i++;
		while(!isalnum(s[j]) && i<j)
			j--;
		if(s[i]!=s[j])
			return false;
		i++;j--;
	}
	return true;
}

int main() {
	/*
"level", return true
"algorithm", return false
"A man, a plan, a canal: Panama.", return true
*/
	SPEED;
	string s, sdash;
	sdash = "";
	getline(cin,s);
	to_lower(s);
	//cout<<s;
	int n = s.length();
	for(int i=0;i<n;i++){
		if(s[i]>='a' && s[i]<='z'){
			sdash += s[i];
		}
	}
	//cout<<sdash;
	bool cond = checkPal(sdash);
	if(cond)
		cout<<"Yes!";
	else
		cout<<"No!";
	return 0;
}



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
string to_lower(string s) {
    for(char &c : s)
        c = tolower(c);
	return s;
}
ll STOI(string s) {
    ll num = 0;
    ll po = 1;
    per(i , s.length() - 1 , 0) {
        num += po * (s[i] - '0');
        po *= 10;
    }
    return num;
}
string reverseString(string s){
	int n = s.length();
	
	for(int i=0;i<n/2;i++){
		char temp = s[i];
		s[i] = s[n-i-1];
		s[n-i-1] = temp;
	}
	
	return s;
}
int main() {
	
	SPEED;
	string s;
	getline(cin,s);
	/*
	“Cat”, return “taC”
	“The Daily Byte”, return "etyB yliaD ehT”
	“civic”, return “civic”
	*/
	cout<<reverseString(s);
	return 0;
}



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
int main() {
	/*
	jewels = "abc", stones = "ac", return 2
	jewels = "Af", stones = "AaaddfFf", return 3
	jewels = "AYOPD", stones = "ayopd", return 0
	*/
	SPEED;
	string jewels, stones;
	cin>>jewels>>stones;
	int count[256]={0,};
	for(int i=0;i<jewels.length();i++)
		count[jewels[i]]++;
	for(int i=0;i<stones.length();i++)
		count[stones[i]]++;
	
	int ans=0;
	for(int i=0;i<256;i++){
		if(count[i]==2)
			ans++;
	}
	cout<<ans;
	return 0;
}



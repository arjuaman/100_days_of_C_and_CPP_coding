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

bool chkPosPal(string s, int n){
        int i=0,j=n-1;
        while(i<j){
            if(s[i]!=s[j])
            {
                int i1=i, j1=j-1, i2=i+1, j2=j;
                while(i1<j1 && s[i1]==s[j1]){
                    i1++;j1--;
                }
                while(i2<j2  && s[i2]==s[j2]){
                    i2++;j2--;
                }
                // if(i1>=j1 || i2>=j2)
                //     return true;
                // else
                //     return false;
                return (i1>=j1 || i2>=j2);
            }
            i++;j--;
        }
	return true;
}
int main() {
	/*
	"abcba", return true
	"foobof", return true (remove the first 'o', the second 'o', or 'b')
	"abccab", return false
	*/
	SPEED;
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = s.length();
		if(chkPosPal(s,n))
		cout<<"yes\n";
		else
		cout<<"no\n";
	}
	return 0;
}



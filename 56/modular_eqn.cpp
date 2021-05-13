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
	
	SPEED;
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int cnt=0;
		unordered_map<int,int> mpp;
		unordered_set<int> stt;
		for(int a=1;a<=n;a++){
			for(int b=a+1;b<=n;b++){
				if(a==1 || b==1){
					cnt++;
					continue;
				}
				int x = (m%a)%b;
				mpp[a] = x; //mpp[1]=0, mpp[2] =0
				//stt.insert(a);
				int y = (m%b)%a;
				//stt.insert(b);
				if(x==y)
					cnt++;
			}
		}
		cout<<cnt<<"\n";
	}
	return 0;
}



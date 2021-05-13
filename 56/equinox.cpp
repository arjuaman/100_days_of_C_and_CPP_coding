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
		int n,a,b;
		cin>>n>>a>>b;
		int sar=0,anu=0;
		char arr[] = {'E','Q','U','I','N','O','X'};
		set<char> st(begin(arr),end(arr));
		while(n--){
			string s;
			cin>>s;
				if(st.count(s[0]))
					sar+=a;
				else
					anu+=b;
		}
		map<int,string> mm;
		//debug(a);
		//debug(b);
		//cout<<endl;
		//for(auto it:st){
		//	cout<<it;
		//}
		//cout<<endl;
		mm[sar]="SARTHAK";
		mm[anu]="ANURADHA";
		if(sar==anu)
			cout<<"DRAW\n";
		else{
			cout<<(sar>anu?mm[sar]:mm[anu])<<"\n";
		}
	}
	return 0;
}



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
static bool comp(string a, string b){
	return a.length()<b.length();
}
string longestCommonPrefix(vector<string> &arr,int n){
	sort(begin(arr),end(arr),comp);
	map<string,int> mpp;
	for (string s:arr){
		for(int i=0;i<s.length();i++){
			//string x = 
			mpp[s.substr(0,i+1)]++;
		}
	}
	string max="";
	int maxcnt=0;
	for(auto it:mpp){
		//cout<<it.first<<" ";
		if(it.second<n)
            continue;
		else if(it.second>maxcnt){
			maxcnt=it.second;
			max=it.first;
		}
		else if(it.second==maxcnt && maxcnt!=0){
			int cand = (it.first).length();
			int master = max.length();
			if(cand>master){
				max = it.first;
			}
			else
				continue;
		}
	}
	
	return max;
}
int main() {
	/*
	["colorado", "color", "cold"], return "col"
	["a", "b", "c"], return ""
	["spot", "spotty", "spotted"], return "spot"
	*/
	SPEED;
	int t;
	cin>>t;
	while(t--){
		vector<string> arr = {"spot", "spotty", "spotted"};
		int n = arr.size();
		string ans = longestCommonPrefix(arr,n);
		cout<<ans<<"\n";
	}
	return 0;
}



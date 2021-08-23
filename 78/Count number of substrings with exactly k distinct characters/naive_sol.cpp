#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vvi vector<vector<int>>
#define vi vector<int>
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define debug(n1) cout << n1 << endl
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)

int kSubs(string s, int k){
	int n = s.length(), ans=0;
	for (int i = 0; i < n; i++){
        for (int len = 1; len <= n - i; len++){
        	int freq[256] = {0,};
        	string x="";
			int temp=0;
    		x = s.substr(i, len) ;//<< endl;  
			cout<<x<<"\n";  	
    		for(int j=0;j<x.length();j++){
    			freq[x[j]]++;
//    			cout<<freq[x[j]];
			}
			for(int m=0;m<256;m++){
				if(freq[m]!=0)
					temp++;
			}
			if(temp==k)
				ans++;
		}
	}
    
    return ans;
}

int main(){
	string a="abc", b = "aba", c="aa";
	int k=1;
	cout<<"\n\nAnswer: "<<kSubs(c,k);
	return 0;
}


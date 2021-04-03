#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
int main() {
	// your code goes here
	SPEED;
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    size_t found = s.find('*');
	    if(found==string::npos){
	    	cout<<"NO\n";
		}
		else{
			int maxm=-1,cnt=1;
			for(int i=found+1;i<n;i++){
				if(s[i]=='*' && s[i-1]=='*'){
					cnt++;
				}
				else{
					cnt=1;
				}
				maxm = max(maxm,cnt);
			}
			if(maxm>=k)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
	}
	return 0;
}


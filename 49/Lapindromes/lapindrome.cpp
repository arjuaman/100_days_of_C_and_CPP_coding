#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.length();
	    unordered_map<char,int> umap;
	    if(n%2!=0){ //odd
	    	for(int i=0;i<(n-1)/2;i++){
	    		umap[s[i]] += 1;
			}
			for(int i=(n+1)/2;i<n;i++){
	    		umap[s[i]] -= 1;
			}
		}
		else{
			for(int i=0;i<n/2;i++){
	    		umap[s[i]] += 1;
			}
			for(int i=n/2;i<n;i++){
	    		umap[s[i]] -= 1;
			}
		}
		int flag=0;		
		for(auto it:umap){
			if(it.second!=0){
				flag=1;break;
			}
		}
		if(flag)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}


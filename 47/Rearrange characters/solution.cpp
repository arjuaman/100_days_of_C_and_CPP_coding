#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    string arr;
	    cin>>arr;
	    int n = arr.length();
	    int max_rep=INT_MIN;
	    unordered_map<char,int> umap;
	    for(int i=0;i<n;i++){
	        umap[arr[i]] += 1;
	    }
	    for(auto it:umap){
	        if(it.second > max_rep)
	            max_rep = it.second;
	    }
	    int non_rep_place = n - max_rep;
	    if(max_rep > non_rep_place+1)
	        cout<<"0";
	    else 
	        cout<<"1";
	    cout<<endl;
	}
	return 0;
}
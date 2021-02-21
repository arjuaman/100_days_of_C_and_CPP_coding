#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int test;
	cin>>test;
	while(test--){
	    string inp;
	    cin>>inp;
	    int n = inp.length();
	    map <char,int> order;
	    for(int i=0;i<n;i++){
	        order[inp[i]] += 1;
	    }
	    multimap<int, char> MM;
	    for(auto it:order){
	        MM.insert({ it.second, it.first });
	    }
	    for (auto it : MM) { 
            cout << it.second; 
        } 
	    cout<<endl;
	}
	return 0;
}
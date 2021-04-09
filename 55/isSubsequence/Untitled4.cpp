#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
bool isSubseq(string s,string sub){
	int n=s.length(), m=sub.length();
	int j = 0; 
    for (int i = 0; i < n && j < m; i++)
        if (sub[j] == s[i])
            j++;
            
    return (j == m);
}
int main() {
	// your code goes here
	SPEED;
	string s;
	cin>>s;
	int t;
	cin>>t;
	while(t--){
	    string sub;
	    cin>>sub;
	    if(isSubseq(s,sub))
	    	cout<<"POSITIVE\n";
	    else
	    	cout<<"NEGATIVE\n";
	}
	return 0;
}


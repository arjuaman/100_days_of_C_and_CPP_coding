#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
int main() {
	// your code goes here
	SPEED;
	int t;
	cin>>t;
	int cnt=0;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int s[2]={0,};
	    s[a]++,s[b]++, s[c]++;
	    if(s[1]>=2)
	    	cnt++;
	}
	cout<<cnt<<"\n";
	return 0;
}


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
string to_lower(string s) {        
    for(char &c : s)
        c = tolower(c);
    return s;
}
int main() {
	// your code goes here
	SPEED;
	string s,sdash="";
	cin>>s;
	s = to_lower(s);
	for(char &c:s){
		if(c=='a' || c=='o' || c=='y' || c=='e' || c=='u' || c=='i')
		{
			continue;
		}
		else
			sdash += c;
	}
	int n = sdash.length();
	if(n==0)
		cout<<"\n";
	else{
		string ans="";
		
		//sdash = (sd).append(sdash);
		for(int i=0;i<n;i++){
			string sd=".";
			ans += sd + sdash[i];
		}
		cout<<ans<<"\n";
	}

	//cout<<sdash;
	return 0;
}


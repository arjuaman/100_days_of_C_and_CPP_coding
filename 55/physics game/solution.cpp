#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
void to_lower(string &s) {        
    for(char &c : s)
        c = tolower(c);
}
int main() {
	// your code goes here
	SPEED;
	int t;
	cin>>t;
	int xx=0,yy=0,zz=0;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    xx+=x, yy+=y, zz+=z;
	}
	//cout<<"\n"<<xx<<yy<<zz<<"\n";
	if(xx==0 && yy==0 && zz==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}


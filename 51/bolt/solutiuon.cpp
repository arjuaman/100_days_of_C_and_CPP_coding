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
	    float a,b,c,v;
	    cin>>a>>b>>c>>v;
	    v = a*b*c*v;
	    v = (float)100/v;
	    float value = (int)(v * 100 + .5);
    	value =  (float)value / 100;
    	//cout<<value<<"\n";
    	if(value<=9.57)
    		cout<<"Yes\n";
    	else
    		cout<<"No\n";
	}
	return 0;
}


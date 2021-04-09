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
	ll price,bal,bananas;
	cin>>price>>bal>>bananas;
	//price dollars for first
	ll cost=0;
	for(int i=1;i<=bananas;i++){
		cost += (i*price);
	}
	cost = cost-bal;
	if(cost<0)
		cout<<0<<"\n";
	else 
		cout<<cost<<"\n";
	return 0;
}


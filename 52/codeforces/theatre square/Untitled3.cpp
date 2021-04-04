#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
int main() {
	// your code goes here
	SPEED;
	ll m,n,a;
	cin>>n>>m>>a;
	ll a1 = ceil(double(n)/a);
	ll a2 = ceil(double(m)/a);
	//cout<<a1<<" "<<a2<<" "<<a1*a2;;
	//float x = float(n)/2;
	cout<<a1*a2<<"\n";
	return 0;
}


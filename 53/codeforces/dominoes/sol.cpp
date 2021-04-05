#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
int main() {
	// your code goes here
	SPEED;
	int m,n;
	cin>>m>>n;
	double area = m*n;
	area = area/2;
	cout<<floor(area)<<"\n";
	return 0;
}


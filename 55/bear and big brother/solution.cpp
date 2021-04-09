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
	int a,b;
	int cnt=0;
	cin>>a>>b;
	while(a<=b){
		a = 3*a;
		b = 2*b;
		cnt++;
	}
	cout<<cnt<<"\n";
	return 0;
}


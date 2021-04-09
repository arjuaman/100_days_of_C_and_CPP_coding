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
	int n,k;
	cin>>n>>k;
	while(k--){
		int temp=n%10;
		if(temp!=0)
			n--;
		else
			n/=10;
		}
	cout<<n<<"\n";
	return 0;
}


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
int main() {
	// your code goes here
	SPEED;
    int a,b,c;
    cin>>a>>b>>c;
	int socks[11]={0,};
	socks[a]++;
	socks[b]++;
	socks[c]++;
	int flag=0;  
	for(int i=0;i<11;i++){
		if(socks[i]>=2){
			flag=1;
			//break;
		}
	}
	if(flag)
		cout<<"Yes\n";
	else
		cout<<"No\n";
	return 0;
}


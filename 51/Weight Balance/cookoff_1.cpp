#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int w1,w2,x1,x2,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    // 1 2 1 2 2
	    int incr = w2-w1;     //1
	    int minm_incr = m*x1; //2
	    int maxm_incr = m*x2; //4
	    if(incr>= minm_incr && incr<=maxm_incr){
	    	cout<<1<<"\n";
		}
		else
			cout<<0<<"\n";
	}
	return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int actv;
	    string origin;
	    cin>>actv>>origin;
	    int laddu = 0,cnt=0;
	    while(actv--){
	    	string activity;
	    	cin>>activity;
	    	if(activity.compare("CONTEST_WON")==0){
	    		int rank;
	    		cin>>rank;
	    		laddu += 300;
	    		if(rank<20)
	    			laddu += (20-rank);
			}
			if(activity.compare("TOP_CONTRIBUTOR")==0){
				laddu += 300;
			}
			if(activity.compare("BUG_FOUND")==0){
				int sev;
				cin>>sev;
				laddu += sev;
			}
			if(activity.compare("CONTEST_HOSTED")==0){
				laddu += 50;
			}
		}
		if(origin.compare("INDIAN")==0){
			cnt = laddu/200;
		}
		else{
			cnt = laddu/400;
		}
		cout<<cnt<<"\n";
	}
	return 0;
}


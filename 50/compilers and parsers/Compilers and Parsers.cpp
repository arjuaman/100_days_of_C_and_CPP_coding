#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    stack<char> st;
	    int n = s.length();
	    int cnt=0;
	    for(int i=0;i<n;i++){
	    	if(st.empty()){
	    		st.push(s[i]);
	    		continue;
			}
			char x = st.top();
			if(s[i]=='>' && x=='<'){
				st.pop();
				cnt += 2;
			}
			else if(s[i]=='<'){
				st.push(s[i]);
			}
			else if(s[i]=='>' && x!='<'){
				st.push(s[i]);
			}
		}
		if(!st.empty() || s[0]=='>'){
		    cout<<0<<"\n";
		}
		else
    		cout<<cnt<<"\n";
	}
	return 0;
}


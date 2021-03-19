#include <bits/stdc++.h>
using namespace std;
int prec(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    stack <char> st;
	    string ans="";
	    st.push('N');
	    
		for(int i=0;i<n;i++){
	    	if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
	    		ans += s[i];
			}
			else if(s[i]=='('){
				st.push(s[i]);
			}
			else if(s[i]==')'){
				while(st.top()!='N' && st.top()!='('){
					char x = st.top();
					st.pop();
					ans += x;
				}
				if(st.top()=='('){
					//char x = st.top();
					st.pop();
				}
			}
			else{ //operators
				while(st.top()!='N' && prec(s[i])<=prec(st.top())){
					char x= st.top();
					st.pop();
					ans += x;
				}
				st.push(s[i]);
			}
		}
		while(st.top()!='N'){
			char x = st.top();
			st.pop();
			ans += x;
		}
		cout<<ans<<"\n";
	}
	return 0;
}


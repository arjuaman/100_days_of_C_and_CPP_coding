#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define debug(n1) cout << n1 << endl
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
bool isNumber( string &s )
{
    char* p;
    strtod(s.c_str(), &p);
    return *p == 0;
}
int postfix(vector<string> t, int n){
	// "4","13","5","/","+"
	// (4 + (13 / 5)) = 6
	stack<int> operands;
	    operands.push(-1);
	    for(string s:t){
        
            
        //cout<<m<<" ";
		if(isNumber(s)){
                int m = stoi(s);
			    operands.push(m);
		    }
		else{
			int y = operands.top();
			operands.pop();
			int x = operands.top();
			operands.pop();
            //int sdash = s;
            if(s=="+"){
                operands.push(x+y);    
            }
            else if(s=="-"){
                operands.push(x-y);
            }
            else if(s=="*"){
                operands.push(x*y);
            }
            else if(s=="/"){
                operands.push(x/y);
            }
		}
	}
	return operands.top();
}
int main() {
	
	vector<char> tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
	int n = tokens.size();
	cout<<postfix(tokens,n);
	return 0;
}



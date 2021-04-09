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
	int t;
	string s;
	cin>>s;
	int n = s.length();
	if(n==1){
		cout<<s<<"\n";
	}
	else{
		vector<int> arr;
		for(int i=0;i<n;i+=2){
			arr.push_back(s[i]-'0');
		}
		sort(begin(arr),end(arr));
		string ans="";
		for(int i=0;i<arr.size();i++){
			if(i==arr.size()-1){
				ans += to_string(arr[i]);
				break;
			}
			ans += to_string(arr[i]) + "+";
		}
		cout<<ans<<"\n";
	}
	return 0;
}


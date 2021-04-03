#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    //transform(s.begin(), s.end(), s.begin(), ::tolower); 
	    string sub="party";
	    if(s.length()<5){
	    	cout<<s<<"\n";
		}
		else{
	    	size_t pos = s.find(sub);
	    	vector<int> ind;
	    	if(pos==string::npos){
	    		cout<<s<<"\n";
			}
			else{
				while(pos != string::npos){
	    			ind.push_back(pos);
	    			pos = s.find(sub,pos+sub.length());
				}
				int j=0;
				for(int i=0;i<s.length();i++){
					if(i==ind[j]){
						s[i+2] = 'w';
						s[i+3] = 'r';
						s[i+4] = 'i';
						j++;
					}
				}
				cout<<s<<"\n";
			}
		}
	}
	return 0;
}


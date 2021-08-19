#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define vi vetor<int>
#define vvi vector<vector<int>>
#define debug(n1) cout << n1 << endl

int main() {
	
	vector<int> pid =  {2, 4, 3, 7, 8, 9, 10, 10};
    vector<int> ppid = {0, 2, 2, 3, 3, 8, 4 , 8};
	int kill = 3;
	
//	vector<pair<int,int>> par_child;
//	for(int i=0;i<pid.size();i++){
//		par_child.push_back({ppid[i], pid[i]});
//	}
//	
//	sort(par_child.begin(), par_child.end());
//	for(auto it:par_child){
//		cout<<it.first<<" "<<it.second<<"\n";
//	}

	map<int,set<int>> parChild;
	for(int i=0;i<pid.size();i++){
		parChild[ppid[i]].insert(pid[i]);
	}
	
	for(auto it:parChild){
		cout<<it.first<<" : ";
		for(auto j:it.second){
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	
	vector<int> processToKill;
	processToKill.pb(kill);
	unordered_set<int> killed;
	killed.insert(kill);
	int i=0;
	
	for(auto it:parChild){
		if(it.second.count(processToKill[i])){
			for(auto j:parChild[processToKill[i]]){
				if(!killed.count(j)){
					cout<<"\nPushing: "<<j;
					processToKill.pb(j);
					killed.insert(j);
					i++;
				}
			}
//			i++;
		}
	}
	
	cout<<"\n";
	for(int k:processToKill)
		cout<<k<<" ";
	
	return 0;
}


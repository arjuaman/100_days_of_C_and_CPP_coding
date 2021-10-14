#include <bits/stdc++.h>
using namespace std;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    // write your code here
    int n = stops.size();
    for(int i=0;i<n-1;i++){
    	if(stops[i]+tank<stops[i+1])
    		return -1;
	}
	if(stops[n-1]+tank<dist) return -1;
	int res=0;
	int i=0,cov=0;
	vector<bool> vis(n,false);
	bool allCoveredFlag=false;
	while(!allCoveredFlag){
		while(i<n && cov + tank >= stops[i]){
			i++;
		}
		if(i==n){
			allCoveredFlag = true;
		}
		i--;
		cov = stops[i];
		res++;
		
	}
    return res;
}


int main() {
    int d = 0;
    cin >> d; //distance
    int m = 0;
    cin >> m; //capacity of fuel tank
    int n = 0;
    cin >> n; //gas sation position

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}

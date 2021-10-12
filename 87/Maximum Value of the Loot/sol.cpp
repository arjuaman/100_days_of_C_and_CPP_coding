#include <bits/stdc++.h>
using namespace std;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
    double value = 0.0;
    if(capacity==0) return value;
	// write your code here
	int n = weights.size();
	vector<pair<double,int>> worth(n);
	for(int i=0;i<n;i++){
		double eff = (double)values[i]/weights[i];
		worth[i] = {eff,weights[i]};
	}
	/*
	worth=> {[3,20],[2,50],[4,30]}
	*/
	sort(worth.begin(), worth.end());
	reverse(worth.begin(), worth.end());
//	for(auto i:worth){
//		cout<<i.first<<" "<<i.second<<"\n";
//	}
	int cur_wt=0, i=0;
	while(cur_wt<capacity){
		if(cur_wt+worth[i].second>capacity){
			int rem_wt = capacity - cur_wt;
			cur_wt = capacity;
			value += worth[i].first * rem_wt;
			break;
		}
		else{
			cur_wt += worth[i].second;
			value += worth[i].first*worth[i].second;
		}
		i++;
	}
    return value;
}

int main() {
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
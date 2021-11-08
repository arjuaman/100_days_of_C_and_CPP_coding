#include <bits/stdc++.h>
using namespace std;

vector<int> optimal_summands(int n) {
  vector<int> summands;
  //write your code here
  if(n==1){
  	summands.push_back(1);
	return summands;	
  }
  if(n==2){
  	summands.push_back(2);
	return summands;
  }
  int res=0, num=n, i=1;
  while(num>0){
  	num -= i;
  	summands.push_back(i);
	i++;
  }
  
  if(num!=0){
  	summands.pop_back();
  	i--;
//  	for(auto it:summands){
//  	cout<<it<<" ";
//  }
//  cout<<"\nnum="<<num<<" i="<<i<<"\n";
  	//num= -3, i=4, summands= {1,2,3}
  	summands[summands.size()-1] = summands[summands.size()-1]+i+num;
  }
  return summands;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
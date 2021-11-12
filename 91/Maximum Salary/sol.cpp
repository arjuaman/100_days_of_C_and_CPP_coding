#include <bits/stdc++.h>
using namespace std;

static bool comp(string &a, string &b){
  string s1 = a+b;
  string s2 = b+a;
  return s1>s2;  	
}

string largest_number(vector<string> &a) {
  //write your code here
  string res;
  sort(a.begin(), a.end(), comp);
  for(string i:a){
  	res += i;
  }
  return res;
}

int main() {
  int n;
  std::cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}
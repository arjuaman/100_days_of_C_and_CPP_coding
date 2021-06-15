#include <bits/stdc++.h>
using namespace std;
int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}
int gcd_improved(int a,int b){
	if(a==0) return b;
	if(b==0) return a;
	return gcd_improved(b,a%b);
}
void test_solution() {
    try{
    	assert(gcd_naive(6,18) == 6);
    	assert(gcd_improved(18,6) == 6);
	}
    catch(int x){
    	cout<<"Exception in stage 1\n";
    	return;
	}
    int n=0,m=0;
    for (int i = 0 ; i < 10; i++){
    	n = rand()%100;
    	m = rand()%100;
        assert(gcd_naive(m,n) == gcd_improved(m,n));
		cout<<"Exception in stage 2\n";	
	}
}
int main() {
  int a, b;
  std::cin >> a >> b;
  //test_solution();
  
  //std::cout << gcd_naive(a, b) << std::endl;
  cout << gcd_improved(a, b) << std::endl;
  
  return 0;
}

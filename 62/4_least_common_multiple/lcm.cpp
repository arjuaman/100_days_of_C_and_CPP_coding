#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}
ll hcf(ll a,ll b){
	if(a==0) return b;
	if(b==0) return a;
	return hcf(b,a%b);
}
int main() {
  ll a, b;
  std::cin >> a >> b;
  ll x = hcf(a, b);
  if(a==0 || b==0)
  	cout<<0<<'\n';
  else if(x==1){
  	cout<<a*b<<"\n";
  }
  else{
  	int mul1 = a/x;
    int mul2 = b/x;
    cout<<mul1*b<<"\n";
  }
  
  return 0;
}

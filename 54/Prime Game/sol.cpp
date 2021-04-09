#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}
int main() {
	SPEED;
	int t;
	cin>>t;
	while(t--){
	    int lo,hi;
	    cin>>lo>>hi;
	    int num_of_elements=0, num_primes=0, lopr=INT_MAX, hipr=INT_MIN;
	    for(int i=lo;i<=hi;i++){
	    	num_of_elements++;
	    	if(isPrime(i)){
	    		num_primes++;
	    		lopr = min(lopr,i);
	    		hipr = max(hipr,i);
			}
		}
		if(num_primes==0)
			cout<<-1<<"\n";
		else if(num_primes==1)
			cout<<0<<"\n";
		else{
			cout<<hipr-lopr<<"\n";
		}
	}
	return 0;
}

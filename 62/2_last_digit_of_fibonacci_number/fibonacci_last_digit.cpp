#include <bits/stdc++.h>
using namespace std;
#define ll long long

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int fibonacci_ld_fast(int n) {
	
	if(n<=1) return n;
	int arr[n];
	arr[0]=0;
	arr[1]=1;
	ll res=0;
	for(int i=2;i<=n;i++){
		arr[i] = (arr[i-1])%10 + (arr[i-2])%10;
		res = arr[i]%10;
	}
	return res;
}

int main() {
    int n;
    std::cin >> n;
    //int d = get_fibonacci_last_digit_naive(n);
    //std::cout << d << '\n';
    int c = fibonacci_ld_fast(n);
    std::cout << c << '\n';
    }

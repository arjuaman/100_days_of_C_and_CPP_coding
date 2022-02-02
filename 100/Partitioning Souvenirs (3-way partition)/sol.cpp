#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int> &arr, int n, int sum){
    // Base Cases
    if (sum == 0)
        return true;
    if (n == 0 && sum != 0)
        return false;
 
    // If last element is greater than sum, then
    // ignore it
    if (arr[n - 1] > sum)
        return isSubsetSum(arr, n - 1, sum);
 
    /* else, check if sum can be obtained by any of
        the following
        (a) including the last element
        (b) excluding the last element
    */
    return isSubsetSum(arr, n - 1, sum)
           || isSubsetSum(arr, n - 1, sum - arr[n - 1]);
}

int partition3(vector<int> &arr) {
  //write your code here
    int sum = accumulate(arr.begin(), arr.end(), 0);
    if(sum%3)
  	    return 0;
	int req = sum/3;
	int req2 = 2*sum/3;
	vector<int> temp1;
	if(isSubsetSum(arr, arr.size(), req)){
		if(isSubsetSum(arr, arr.size(), req2)){
			return 1;
		}
		return 0;
	}
	
    return 0;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> A(n);
  for (size_t i = 0; i < A.size(); ++i) {
    std::cin >> A[i];
  }
  std::cout << partition3(A) << '\n';
}

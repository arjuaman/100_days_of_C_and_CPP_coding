#define ll long long
class Solution {
public:
    int subtractProductAndSum(int n) {
        // vector<int> digits;
        // int num = n;
        int sum=0, prod=1;
        while(n>0){
            int temp = n%10;
            prod *= temp;
            sum += temp;
            // digits.push_back(temp);
            n /= 10;
        }
        return prod-sum;
//         int sum = accumulate(digits.begin(), digits.end(), 0);
//         for(int i=1;i<digits.size();i++){
//             digits[i] *= digits[i-1];
//         }
        
//         return digits[digits.size()-1]-sum;
    }
};
#define ll long long
class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> digits;
        int num = n;
        while(num>0){
            int temp = num%10;
            digits.push_back(temp);
            num /= 10;
        }
        int sum = accumulate(digits.begin(), digits.end(), 0);
        for(int i=1;i<digits.size();i++){
            digits[i] *= digits[i-1];
        }
        
        return digits[digits.size()-1]-sum;
    }
};
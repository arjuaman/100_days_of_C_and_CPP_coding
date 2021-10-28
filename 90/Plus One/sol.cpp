class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        // [1,9,3]
        int i=n-1, carry=0;
        digits[i]+=1;
        while(i>=0){
            int sum = digits[i] + carry;
            carry=0;
            carry = sum/10;
            digits[i] = sum%10;
            i--;
        }
        if(carry){
            digits.push_back(1);
            rotate(digits.rbegin(), digits.rbegin() + 1, digits.rend());
        }
        
        return digits;
    }
};
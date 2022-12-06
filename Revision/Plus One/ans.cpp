class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // [4,3,9,9] and [9]
        digits[digits.size()-1] += 1;
        if(digits[digits.size()-1]!=10)
            return digits;
        
        int n = digits.size(), i = 0;
        reverse(digits.begin(), digits.end());
        // [10,9,3,4]
        while(i<n && digits[i]==10){
            // if(digits[i]==10){
                digits[i]=0;
                if(i+1 < n){
                    digits[i+1]++;
                }
                else{
                    digits.push_back(1);
                }
            // }
            i++;
        }
        
        reverse(digits.begin(), digits.end());
        
        return digits;
    }
};
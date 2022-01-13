// The idea is simple: use log base 10 to get number of digits and check for even/odd. 
// Just a small catch here: log base 10 of a number gives the number of digits - 1.
// Example:  (int)log10(9) = 0
// So if number of digits is even, log10(n) will be odd. Hence, we just need to do bitwise AND of log10(n) and 1 for odd check.

// even & 1 = 0
// odd & 1 = 1

// we want even, but log gives -1, so for even, corresponding log i.e odd will give us +1

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res=0;
        for(auto num:nums) {
            res += (int)log10(num) & 1;
        }
        return res;
    }
};
#define ll long long
class Solution {
public:
    double log_a_to_base_b(int a, int b)
    {
        return log(a)/log(b);
    }
    
    bool isPowerOfThree(int n) 
    {
        n=(ll)n;
        if(n< INT_MIN+1 || n>INT_MAX-2)
            return 0;
        if(n==1) return true;
        if(n%3!=0) return false;
        double x = log_a_to_base_b(n,3);
        return abs(x-round(x))< 1e-10;
    }
};
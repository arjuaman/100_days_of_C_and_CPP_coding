class Solution {
public:
    int arrangeCoins(int n) {
      /* 1=2c2 3=3c2 <n=5> 6=4c2 <n=8> 10=5c2 15=6c2...
         xc2 = n
         x(x+1) = 2n
         (x+0.5)^2 = 2n + 0.25
      */
        return floor(-0.5+sqrt((double)2*n+0.25));
    }
};
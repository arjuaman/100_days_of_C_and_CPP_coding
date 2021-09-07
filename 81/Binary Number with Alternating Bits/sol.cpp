#define ll long long
class Solution {
public:
    bool hasAlternatingBits(int n) {
        ll temp = (ll)n + (n>>1);
        return (temp&(temp+1))==0;
    }
};
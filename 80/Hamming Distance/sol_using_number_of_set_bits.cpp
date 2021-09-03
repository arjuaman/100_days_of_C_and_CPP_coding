class Solution {
public:
    int num_set_bits(int n){
        int cnt=0;
        while(n){
            cnt += n%2;
            n/=2;
        }
        return cnt;
    }
    
    int hammingDistance(int x, int y) {
        x = x^y;
        return num_set_bits(x);
    }
};
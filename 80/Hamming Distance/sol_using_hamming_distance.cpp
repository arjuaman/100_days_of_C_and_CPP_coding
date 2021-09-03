class Solution {
public:
    int hamming_weight(int n){
        int mask=1, cnt=0;
        for(int i=0;i<32;i++){
            if((n&mask)!=0)
                cnt++;
            mask = (mask & 0xffffffff)<<1;
        }
        return cnt;
    }
    
    int hammingDistance(int x, int y) {
        x = x^y;
        return hamming_weight(x);
    }
};
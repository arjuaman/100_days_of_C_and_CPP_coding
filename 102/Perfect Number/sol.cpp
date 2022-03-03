class Solution {
public:
    bool checkPerfectNumber(int num) {
        int m = num/2, sum=0;
        for(int i=1;i<=m;i++){
            if(num%i==0){
                sum += i;
            }
        }
        return sum==num;
    }
};
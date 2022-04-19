class Solution {
public:
    bool isPerfectSquare(int num) {
        //014569
        if(num==0||num==1||num==4||num==9) return true;
        int lastDigit = num%10;
        if(lastDigit==2 ||lastDigit==3 ||lastDigit==7 ||lastDigit==8)
            return false;
        //digital root
        int sum = 0, n = num;
        // while(n){
        //     sum += n%10;
        //     n/=10;
        //     if(n<=0 && sum>=10){
        //         n = sum;sum=0;
        //     }
        // }
        // // cout<<sum<<" ";
        // if(sum==2 ||sum==3 ||sum==7 ||sum==8)
        //     return false;
        
        sum=0;
        for(int i=1;i<num && sum<num;i+=2){
            sum+=i;
        }
        
        return sum==num;
    }
};
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int len=nums.size();
        if(len==0) return 0;
        int res=0;
        for(int i=0;i<len;i++){
            int num = nums[i];
            int temp,k=0;
            while(num!=0){
                temp = num%10;
                num /= 10;
                k++;
            }
            if(k%2==0)
                res++;
        }
        return res;
    }
};
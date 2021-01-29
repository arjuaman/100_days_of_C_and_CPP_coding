class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        if(n==3) return 2;
        vector<int> nums(n+1,0);
        nums[0]=0;
        nums[1]=1;
        int max=1;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                int j = i/2;
                nums[i]=nums[j];
            }
            else{
                int j = (i-1)/2;
                nums[i] = nums[j] + nums[j+1];
            }
            if(nums[i]>max)
                max = nums[i];
        }
        return max;
    }
};
class Solution {
public:
    
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum&1)
            return false;
        // return recursive(nums, nums.size(), sum/2);
        return dpSoln(nums, nums.size(), sum);
    }
    
    bool dpSoln(vector<int>& nums, int n, int sum){
        vector<bool> part(sum/2+1, false);
        for(int i=0;i<n;i++){
            for(int j=sum/2; j>=nums[i]; j--){
                if(part[j-nums[i]] || j==nums[i])
                    part[j]=true;
            }
        }
        
        return part[sum/2];
    }
    
    // bool recursive(vector<int>& nums, int n, int sum){
    //     if(sum==0)
    //         return true;
    //     if(sum!=0 && n==0)
    //         return false;
    //     if(nums[n-1]>sum)
    //         return recursive(nums, n-1, sum);
    //     return recursive(nums, n-1, sum) || recursive(nums, n-1, sum-nums[n-1]);
    // }
};
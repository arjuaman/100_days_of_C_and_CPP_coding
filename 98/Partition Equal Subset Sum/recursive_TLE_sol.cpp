class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum&1)
            return false;
        return helper(nums, nums.size(), sum/2);
    }
    
    bool helper(vector<int>& nums, int n, int sum){
        if(sum==0)
            return true;
        if(sum!=0 && n==0)
            return false;
        if(nums[n-1]>sum)
            return helper(nums, n-1, sum);
        return helper(nums, n-1, sum) || helper(nums, n-1, sum-nums[n-1]);
    }
};
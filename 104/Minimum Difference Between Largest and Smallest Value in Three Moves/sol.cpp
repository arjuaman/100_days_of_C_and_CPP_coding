class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n<=4)
            return 0;
        sort(nums.begin(), nums.end());
        int minm = INT_MAX;
        minm = min(minm, nums[n-4]-nums[0]); //max 3 conversion
        minm = min(minm, nums[n-3]-nums[1]); //max 2 conversion and 1 min
        minm = min(minm, nums[n-2]-nums[2]); //max 1 conversion and 2 min
        minm = min(minm, nums[n-1]-nums[3]); //min 3 conversion
        
        return minm;
    }
};
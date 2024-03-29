class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        if(nums.size()<=1) return 0;
        sort(nums.begin(), nums.end());
        int ans = 0, cur = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                ans += max(1, nums[i-1]-nums[i]+1);
                nums[i] = nums[i-1] + 1;
            }
        }
        
        return ans;
    }
};
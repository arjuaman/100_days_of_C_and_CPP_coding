class Solution {
public:
    int minMoves(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());
        if(s.size()==1 || nums.size()==1)
            return 0;
        if(nums.size()==2)
            return nums[nums.size()-1]-nums[0];
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int minm = nums[0];
        for(auto it:nums){
            minm = min(minm, it);
        }
        return sum - nums.size()*minm;
    }
};
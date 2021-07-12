class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty())
            return 0;
        vector<int> seq;
        seq.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]>seq.back())
                seq.push_back(nums[i]);
            else{
                int pos = lower_bound(begin(seq),end(seq),nums[i])-begin(seq);
                seq[pos] = nums[i];
            }
        }
        return seq.size();
    }
};
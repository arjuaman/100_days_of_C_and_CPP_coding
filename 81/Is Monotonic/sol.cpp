class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool incr = true, decr = true;
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i+1]>nums[i])
                decr=false;
            if(nums[i+1]<nums[i])
                incr=false;
        }
        
        // cout<<incr<<" "<<decr;
        
        return incr||decr;
    }
};
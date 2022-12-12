class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()<=1) return;
        int n = nums.size();
        
        vector<int> dummy;
        int zero_count= 0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0)
                dummy.push_back(nums[i]);
            else
                zero_count++;
        }
        
        for(int i=0;i<zero_count;i++){
            dummy.push_back(0);
        }
        
        nums = dummy;
        return;
    }
};
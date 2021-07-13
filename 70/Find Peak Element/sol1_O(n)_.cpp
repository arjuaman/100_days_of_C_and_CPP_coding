class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()<=2){
            switch(nums.size()){
                case 1: return 0;break;
                case 2: return nums[0]>nums[1]?0:1;break;
            }
        }
        
        int ind=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
                return i;
        }
        
        return nums[0]>nums[nums.size()-1]?0:nums.size()-1;
    }
};
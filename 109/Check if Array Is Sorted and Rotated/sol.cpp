class Solution {
public:
    bool check(vector<int>& nums) {
        int distorted = 0, point = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                distorted++;
                point = i;
            }
        }
        if(distorted==0) return true;
        if(distorted>1) return false;
        // cout<<distorted<<" ";
        vector<int> dummy;
        // sort(dummy.begin(), dummy.end());
        for(int i=point;i<nums.size();i++){
            dummy.push_back(nums[i]);
        }
        for(int i=0;i<point;i++){
            dummy.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        
        return nums==dummy;
    }
};
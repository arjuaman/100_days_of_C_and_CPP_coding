class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int prefixSum[nums.size()];
        prefixSum[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }
        
        int minm = INT_MAX;
        for(auto i:prefixSum){
            minm = min(i, minm);
            // cout<<i<<" ";
        }
        // cout<<"\n";     
        
        if(minm<0)
            return abs(minm)+1;
        return 1;
    }
};
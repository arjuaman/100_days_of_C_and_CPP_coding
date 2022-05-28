class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums,k) - helper(nums,k-1);
    }
    
    int helper(vector<int>& nums, int k){
        if(nums.size()==0)
            return 0;
        
        int ans = 0, left = 0;
        unordered_map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        
            while(freq.size()>k){
                freq[nums[left]]--;
            
                if(freq[nums[left]]==0)
                    freq.erase(nums[left]);
            
                left++;
            }
            ans += i - left + 1;
        }
        return ans;
    }
};
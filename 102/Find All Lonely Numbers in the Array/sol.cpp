class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n = nums.size();
        
        set<int> lonely_candidates, allNums(nums.begin(), nums.end());
        unordered_map<int,int> freq;
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            if(it.second == 1)
                lonely_candidates.insert(it.first);
        }
        
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(!lonely_candidates.count(nums[i]) || allNums.count(nums[i]+1) || allNums.count(nums[i]-1))
                continue;
            ans.push_back(nums[i]);
        }
        
        return ans;
    }
};
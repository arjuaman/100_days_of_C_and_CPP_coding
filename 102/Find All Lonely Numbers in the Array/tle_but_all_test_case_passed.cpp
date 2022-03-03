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
        
        vector<vector<int>> dp(n, vector<int> (3));
        for(int i=0; i<n; i++){
            vector<int> temp;
            temp.push_back(nums[i]);
            temp.push_back(nums[i]-1);
            temp.push_back(nums[i]+1);    
            dp.push_back(temp);
        }
        // 10->[-1,11], 6->[5,7]
        vector<int> ans;
        for(auto it:dp){
            int x = it[0], l = it[1], r = it[2];
            if(!lonely_candidates.count(x) || allNums.count(l) || allNums.count(r))
                continue;
            ans.push_back(x);
        }
        
        return ans;
    }
};
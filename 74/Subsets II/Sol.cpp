class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> subs;
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        subsets(nums, 0, temp, subs);
        for(auto it:subs){
            ans.push_back(it);
        }
        return ans;
    }
    
    void subsets(vector<int>& nums, int i, vector<int>& sub, set<vector<int>> &subs) {
        // sort(sub.begin(),sub.end())
        subs.insert(sub);
        for (int j = i; j < nums.size(); j++) {
            sub.push_back(nums[j]);
            subsets(nums, j + 1, sub, subs);
            sub.pop_back();
        }
    }
};
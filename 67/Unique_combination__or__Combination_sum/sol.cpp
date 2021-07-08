class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        int n = candidates.size();
        vector<int> temp;
        sort(begin(candidates),end(candidates));
        helper(ans, candidates, temp, n, target, 0);
        
        return ans;
    }
    
    void helper(vector<vector<int>> &ans, vector<int>& c, vector<int> &temp, int n, int target, int begin){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=begin;i<c.size() && target>=c[i];i++){
            temp.push_back(c[i]);
            helper(ans, c, temp, n, target-c[i], i);
            temp.pop_back();
        }
    }
};
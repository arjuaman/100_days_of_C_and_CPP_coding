class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(ans,temp,0,nums);
        return ans;
    }
    
    void helper(vector<vector<int>> &ans, vector<int>& temp, int i, vector<int>& nums){
        ans.push_back(temp);
        for(int j=i;j<nums.size();j++){
            temp.push_back(nums[j]);
            helper(ans,temp,j+1,nums);
            temp.pop_back();
        }
    }
};
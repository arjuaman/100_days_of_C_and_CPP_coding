class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> setRes;
        vector<int> temp;
        helper(setRes, temp, 0, nums);
        for(auto i:setRes){
            ans.push_back(i);
        }
        return ans;
    }
    
    void helper(set<vector<int>> &setRes, vector<int>& temp, int i, vector<int>& nums){
        if(temp.size()>1)
            setRes.insert(temp);
        
        for(int j=i;j<nums.size();j++){
            if(!temp.empty()){
                if(nums[j]>=temp[temp.size()-1]){
                    temp.push_back(nums[j]);
                }
                else
                    continue;
            }
            else{
                temp.push_back(nums[j]);
            }
            
            helper(setRes, temp, j+1, nums);
            
            if(!temp.empty())
                temp.pop_back();
        }
    }
};
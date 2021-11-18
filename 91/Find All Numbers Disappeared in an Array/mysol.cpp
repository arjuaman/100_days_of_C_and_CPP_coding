class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        set<int> s(nums.begin(), nums.end());
        for(int i=1;i<=n;i++){
            if(!s.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
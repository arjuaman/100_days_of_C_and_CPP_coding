class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(1,vector<int>(3,0));
        if(nums[0]%3 == 0){
            dp[0][0] = nums[0];
        }else if(nums[0]%3 == 1){
            dp[0][1] = nums[0];
        }else{
            dp[0][2] = nums[0];
        }
        for(int i=1;i<n;i++){
            int x = dp[0][0] + nums[i];
            int y = dp[0][1] + nums[i];
            int z = dp[0][2] + nums[i];
            // cout<<x<<" "<<y<<" "<<z<<endl;
            dp[0][x%3] = max(dp[0][x%3],x);
            dp[0][y%3] = max(dp[0][y%3],y);
            dp[0][z%3] = max(dp[0][z%3],z);
            
        }
        return dp[0][0];
    }
};
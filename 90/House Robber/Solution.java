class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        if(n==1) return nums[0];
        int[] dp = new int[n+1];
        
        dp[0] = 0;
        dp[1] = nums[0];
        
        for(int i=1;i<n;i++){
            dp[i+1] = Math.max(dp[i-1]+nums[i] , dp[i]);
        }
        
        /*
        nums[] = [2,1,1,2]
        dp[0] = 0
        dp[1] = 2
        dp[2]  => i=1 => 1, 2 = 2
        dp[3]  => i=2 => 3, 2 = 3
        dp[4]  => i=3 => 4, 3 = 4
        */
        
        return dp[n];
    }
}
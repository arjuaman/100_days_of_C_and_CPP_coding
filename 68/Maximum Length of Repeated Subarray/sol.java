class Solution {
    public int findLength(int[] nums1, int[] nums2) {
        if(nums1==null && nums2==null)
            return 0;
        int m = nums1.length;
        int n = nums2.length;
        int[][] dp = new int[m+1][n+1];
        int max=0;
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(nums1[i-1]==nums2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                    max = Math.max(max, dp[i][j]);
                }
            }
        }
        return max;
    }
}
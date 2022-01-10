class Solution {
    public double findMaxAverage(int[] nums, int k) {
//         int n = nums.length;
//         long ans = Long.MIN_VALUE;
//         // double mod = 1e9+7;
        
//         for(int i=0; i<n-k+1; i++){
//             long sum = 0;
//             for(int j=i;j<i+k;j++){
//                 sum += nums[j];
//             }
            
//             // sum /= 1.0;
//             // sum /= k;
//             ans = Math.max(ans, sum);
//         }
        
//         return ans/1.0/k;
        
        long sum = 0;
        for (int i = 0; i < k; i++) 
            sum += nums[i];          // sum of first k, we'll assume 4
        
        long max = sum;
        
        for (int i = k; i < nums.length; i++) {  
            sum += nums[i] - nums[i - k];        // +1 from ahead, -1 from behind 
            max = Math.max(max, sum);
        }
        
        return max / 1.0 / k;
    }
}
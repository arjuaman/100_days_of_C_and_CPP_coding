class Solution {
    public int missingNumber(int[] nums) {
        int sum = 0;
        for(int i:nums){
            sum += i;
        }
        
        int actual_sum = (nums.length * (nums.length + 1))/2;
        
        return actual_sum - sum;
    }
}
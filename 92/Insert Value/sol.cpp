class Solution {
    public int searchInsert(int[] nums, int target) {
        // int pos=-1;
        int lo=0, hi=nums.length-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target)
                return mid;
            if(target<nums[mid]){
                hi=mid-1;
            }
            else
                lo=mid+1;
        }
        
        return lo;
    }
}
// Fisher-Yates Algorithm


class Solution {
    int[] arr;
    public Solution(int[] nums) {
        arr = nums.clone();
    }
    
    /** Resets the array to its original configuration and return it. */
    public int[] reset() {
        return arr;
    }
    
    /** Returns a random shuffling of the array. */
    public int[] shuffle() {
        int[] ans = arr.clone();
        Random random = new Random();   
        // int min=0, max=arr.length;
        for(int i=0;i<arr.length;i++){
            // int index = Math.random()*(max-min+1)+min;
            int index = random.nextInt(arr.length);
            int temp = ans[i];
            ans[i] = ans[index];
            ans[index] = temp;
        }
        return ans;
    }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * int[] param_1 = obj.reset();
 * int[] param_2 = obj.shuffle();
 */
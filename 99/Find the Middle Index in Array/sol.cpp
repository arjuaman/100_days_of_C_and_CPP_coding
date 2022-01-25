class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        // int sum = accumulate(nums.begin(), nus.end(), 0);
        
        vector<int> prefix(n+1, 0);
        for(int i=1;i<=n;i++){
            prefix[i] = prefix[i-1] + nums[i-1];  //0 1 8 11 17 22 28
        }
        
        int lsum = 0, rsum = prefix[n], cur = prefix[n];
        for(int i=0;i<n;i++){
            
            lsum = prefix[i];
            rsum -= nums[i];
            
            if(lsum==rsum)
                return i;
        }
        
        return -1;
    }
};
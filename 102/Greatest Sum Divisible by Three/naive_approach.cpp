class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum%3==0)
            return sum;
        // 1 3 5 6 8      2 2 2 6 7
        int curMax = 0, n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = 0;
        
        for(int i=0;i<n;i++){
            sum -= nums[i];
            if(sum%3==0)
                ans = max(ans, sum);
            sum += nums[i];
        }
        
        for(int i=0; i<n; i++){
            int subSum = 0;
            for(int j=i+1; j<n; j++){
                subSum += nums[j];
            }
            if(subSum%3==0)
                ans = max(ans, subSum);
        }
        
        return ans;
    }
};
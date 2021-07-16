class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        if(n<=1)
            return true;
        int total = accumulate(nums.begin(),nums.end(),0);
        int maxPoints = winner(nums,0,n-1);
        return maxPoints>=(total-maxPoints);
    }
    int winner(vector<int>& nums, int left, int right){
        if(left>right)
            return 0;
        if(left==right)
            return nums[left];
        return max(nums[left] + min(winner(nums,left+2,right),
                                    winner(nums,left+1,right-1)),
                   nums[right] + min(winner(nums,left+1,right-1),
                                     winner(nums,left,right-2)));
        
    }
};
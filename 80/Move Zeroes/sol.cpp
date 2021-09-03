class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n==0 || n==1) return;
        set<int> s(nums.begin(), nums.end());
        if(s.size()<=1) return;
        int r=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                while(r<n && nums[r]==0){
                    r++;
                }
                if(r<n)
                    swap(nums[i], nums[r]);
                else
                    return;
            }
            // i=r;
            r++;
        }
    }
};
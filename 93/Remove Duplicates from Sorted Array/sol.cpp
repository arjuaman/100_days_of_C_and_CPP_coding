class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        int x=0,y=1,res=1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]>nums[x]){
                res++;
                nums[y]=nums[i];
                x=y;
                y++;
            }
        }
        return res;
    }
};
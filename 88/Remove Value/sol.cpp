class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0, r = nums.size() - 1;
        set<int> s(nums.begin(), nums.end());
        if(s.size()==1){
            if(s.count(val)){
                nums.clear();
                return 0;
            } 
            else{
                return nums.size();
            }
        }
        while(l<r){
            if(nums[l]==val){
                while(l<r && nums[r]==val){
                    r--;
                }
                if(l>=r)
                    break;
                nums[l] = -1;
                swap(nums[l], nums[r]);
                r--;
            }
            l++;
        }
        if(l==r && nums[l]==val){
            nums[l]=-1;
        }
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==-1)
                break;
            res++;
        }
        return res;
    }
};
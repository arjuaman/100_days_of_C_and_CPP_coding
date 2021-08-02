class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        vector <int> res(2);
        int i=0,j=len-1;
        for(int k=0;k<len;k++){
            int req = target-nums[k];
            for(int m=k+1;m<len;m++){
                if(nums[m]==req){
                    res[0]=k;
                    res[1]=m;
                    break;
                }
            }
        }
        return res;
    }
};
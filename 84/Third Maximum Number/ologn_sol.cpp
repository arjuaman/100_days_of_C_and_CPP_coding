class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> freq(nums.begin(), nums.end()); 
        int n = nums.size();
        int setSize = freq.size();
        if(setSize<3){
            sort(nums.begin(), nums.end());
            return nums[n-1];
        }
        // if(setSize<3){
        //     sort(nums.begin(), nums.end());
        //     return nums[0];
        // }
        sort(nums.begin(), nums.end());
        set<int> uniq;
        for(int i=n-1;i>=0;i--){
            if(uniq.size()!=2){
                uniq.insert(nums[i]);
            }
            else if(!uniq.count(nums[i]))
                return nums[i];
        }
        return 0;
    }
};
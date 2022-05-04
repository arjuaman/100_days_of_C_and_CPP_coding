class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();
        if(n%k)
            return false;
        // sort(nums.begin(), nums.end());
        map<int, int> freq;
        for(int i:nums){
            freq[i]++;
        }
        for(auto [key,v]:freq){
            // int loop = k, start;
            while(freq[key]){
                for(int i=key;i<key+k;i++){
                    freq[i]--;
                    if(freq[i]<0)
                        return false;
                }
            }
        }
        
        return true;
    }
};
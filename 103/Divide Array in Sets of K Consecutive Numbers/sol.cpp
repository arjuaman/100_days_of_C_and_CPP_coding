class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();
        if(n%k)
            return false;
        map<int,int> freq;
        for(auto num : nums)
            freq[num]++;
        
        for(auto [key, value] : freq)
        {
            while(freq[key])
            {
                for(int i = key; i < key + k; ++i)
                {
                    freq[i]--;
                    if(freq[i] < 0)
                        return false;
                }
            }
        }
        return true;
    }
};

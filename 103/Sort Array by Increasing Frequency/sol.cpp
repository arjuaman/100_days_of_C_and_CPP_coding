class Solution {
    map<int, int> freq;
public:
    bool comp(int a, int b){
        if(a!=b){
            int c1 = freq[a];
            int c2 = freq[b];
            if(c1!=c2)
                return c1<c2;
            else{
                return a>b;
            }
        }
        return a>b;
    }
    vector<int> frequencySort(vector<int>& nums) {
        for(int i:nums){
            freq[i]++;
        }
        sort(nums.begin(), nums.end(), [this](int a, int b) { return comp(a,b); });
        return nums;
    }
};
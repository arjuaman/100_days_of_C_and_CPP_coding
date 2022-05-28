class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        set<int> s(arr.begin(), arr.end());
        map<int, int> freq;
        int ans = arr.size()-1;
        
        for(int i:arr)
            freq[i]++;
        
        multimap<int, int> mm;
        for (auto& it : freq) {
            mm.insert({ it.second, it.first });
        }
        
        for(auto [count,ele]:mm){
            // cout<<k<<" "<<v<<"\n";  key is frequency, value is element
            while(freq[ele] && k>0){
                freq[ele]--;
                k--;
                // cout<<ele<<" ";
            }
            if(freq[ele]<=0){
                // cout<<ele<<" ";
                s.erase(ele);
            }
        }
        
        return s.size();
    }
};
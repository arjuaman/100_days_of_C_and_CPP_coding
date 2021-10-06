class Solution {
public:
    static bool cmp(pair<string, int>& a, pair<string, int>& b){
        return a.second > b.second;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;
        if(words.empty()) return ans;
        unordered_map<string,int> freq;
        
        for(string s:words){
            freq[s]++;
        }
        vector<pair<string, int>> vec;
        for(auto i:freq){
            vec.push_back(i);
        }
        sort(vec.begin(), vec.end(), cmp);
        int j=0;
        for(auto i:vec){
            if(j>=k)
                break;
            ans.push_back(i.first);
            j++;
        }
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};
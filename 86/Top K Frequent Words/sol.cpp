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
        int cur = vec[0].second;
        // cout<<vec[0].first<<" "<<vec[0].second;
        vector<string> temp;
        for(auto i:vec){
            if(j>=k && cur!=i.second)
                break;
            if(i.second==cur)
                temp.push_back(i.first);
            else{
                sort(temp.begin(), temp.end());
                for(string x:temp)
                    ans.push_back(x);
                temp.clear();
                cur = i.second;
                temp.push_back(i.first);
            }
            j++;
        }
        if(!temp.empty()){
            sort(temp.begin(), temp.end());
            for(string x:temp)
                ans.push_back(x);
            temp.clear();
        }
        
        while(k!=ans.size()){
            ans.pop_back();
        }
        
        // sort(ans.begin(), ans.end());
        
        return ans;
    }
};
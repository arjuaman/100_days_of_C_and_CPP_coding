class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;    
        }
        
        set<int> s;
        for(auto i:freq){
            if(s.count(i.second))
                return false;
            s.insert(i.second);
        }
        
        return true;
    }
};
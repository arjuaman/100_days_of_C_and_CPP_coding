class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans, count(256,0);
        if(s.empty() || s.length()<p.length())
            return ans;
        int m = p.length();
        for(int i=0;i<m;i++){
            count[p[i]]++;
        }
        for(int i=0;i<s.length()-m+1;i++){
            vector<int> temp_count(256,0);
            for(int j=i;j<i+m;j++){
                temp_count[s[j]]++;
            }
            if(count==temp_count)
                ans.push_back(i);
        }
        
        return ans;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        if(n==0 && m==0) return true;
        if(n!=m) return false;
        
        unordered_map<char,int> umap;
        for(int i=0;i<n;i++){
            umap[s[i]] += 1;
        }
        for(int i=0;i<n;i++){
            umap[t[i]] -= 1;
        }
        for(auto it:umap){
            if(it.second!=0)
                return false;
        }
        return true;
    }
};
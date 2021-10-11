class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> mpp;
        int i=0, j=0, n= pattern.length();
        vector<string> words;
        string temp="";
        for(int k=0;k<s.length();k++){
            if(s[k]==' '){
                words.push_back(temp);
                temp="";
            }
            else
                temp+=s[k];
        }
        if(temp.length()){
            words.push_back(temp);
            temp="";
        }
        while(i<n){
            if(mpp.find(pattern[i])!=mpp.end()){
                if(mpp[pattern[i]]!=words[j])
                    return false;
            }
            else{
                mpp[pattern[i]] = words[j]; 
            }
            i++, j++;
        }
        
        i=0;
        j=0;
        int mapsize = mpp.size();
        set<string> vals;
        for(auto it:mpp){
            vals.insert(it.second);
        }
        if(vals.size()!=mapsize)
            return false;
        
        return words.size()==n;
    }
};
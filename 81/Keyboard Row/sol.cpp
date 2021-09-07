class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        if(words.empty()) return ans;
        string s1="qwertyuiop", s2="asdfghjkl", s3="zxcvbnm";
        set<char> set1, set2, set3;
        for(char ch:s1){
            set1.insert(ch);
        }
        for(char ch:s2){
            set2.insert(ch);
        }
        for(char ch:s3){
            set3.insert(ch);
        }
        for(string s:words){
            bool inA=true, inB=true, inC=true;
            for(auto c : s)
            {
                c = tolower(c);
            }
            cout<<s<<"\n";
            for(char c:s){
                if(set1.count(c))
                    inB=false, inC=false;
                if(set2.count(c))
                    inA=false, inC=false;
                if(set3.count(c))
                    inB=false, inA=false;
            }
            if(!(inA&&inB&&inC) && (inA^inB^inC))
                ans.push_back(s);                
        }
        return ans;
    }
};
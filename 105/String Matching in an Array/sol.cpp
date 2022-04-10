class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string> s;//(words.begin(), words.end());
        // sort(words.begin(), words.end(), [this](string a, string b) { 
        //     return a.length()>b.length(); 
        // });
        vector<string> ans;
        for(auto par:words){
            for(auto child:words){
                if(par!=child && par.find(child)!=string::npos){
                    s.insert(child);
                }
            }
        }
        
        for(string i:s){
            ans.push_back(i);
        }
        
        return ans;
    }
};
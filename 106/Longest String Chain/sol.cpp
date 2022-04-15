class Solution {
public:
    int longestStrChain(vector<string>& words) {
        int ans = 0;
        sort(words.begin(), words.end(), [this](string a, string b) { 
            return a.length()<b.length(); 
        });
        
        map<string,int> freq;
        // string smallest = words[0];
        // freq[smallest] = 1;
        // for(string s:words){
        //     if(s.length()==smallest.length())
        //         freq[s] = 1;
        //     else
        //         break;
        // }
        
        for(int i=0;i<words.size();i++){
            string super = words[i];
            int curMax = 0;
            
            for(int j=0;j<super.length();j++){
                string s = super.substr(0, j) + super.substr(j + 1);
                // cout<<s<<" ";
                if(freq.find(s)!=freq.end()){
                    // cout<<s<<" "<<freq[s]<<"\n";
                    freq[super] =max(freq[super] ,freq[s]+1);
                }
                else
                    freq[super] = max(freq[super], 1);
            }
        }
        
        // cout<<endl;
        for(auto i:freq){
            // cout<<i.first<<" "<<i.second<<"\n";
            ans = max(ans, i.second);
        }
        
        return ans;
    }
};
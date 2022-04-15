class Solution {
public:
    int editDistance(string s, string sub) {
        if(s==sub)
            return 0;
        int m = s.length();
        int n = sub.length();
        
        if(m==0) return n;
        if(n==0) return m;
        
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0)
                    dp[i][j] = j;
                else if(j==0)
                    dp[i][j] = i;
                else if(s[i-1]==sub[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                else{
                    dp[i][j] = 1 + min(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        return dp[m][n];
    }
    
    int longestStrChain(vector<string>& words) {
        int ans = 0;
        sort(words.begin(), words.end(), [this](string a, string b) { 
            return a.length()<b.length(); 
        });
        
        map<string,int> freq;
        string smallest = words[0];
        freq[smallest] = 1;
        for(string s:words){
            if(s.length()==smallest.length())
                freq[s] = 1;
            else
                break;
        }
        
        for(int i=0;i<words.size();i++){
            string smaller = words[i];
            
            for(int j=i+1;j<words.size();j++){
                string cur = words[j];
                if(editDistance(smaller, cur)==1){
                    freq[cur] = max(freq[cur], freq[smaller] + 1);
                }
                else{
                    continue;
                }
            }
        }
        
        for(auto i:freq){
            ans = max(ans, i.second);
        }
        
        return ans;
    }
};
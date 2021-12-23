class Solution {
public:
    int maxDepth(string s) {
        int ans=0, m=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                m++;
            if(s[i]==')')
                m--;
            ans = max(ans, m);
        }
        return ans;
    }
};
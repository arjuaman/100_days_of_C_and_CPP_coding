class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        int n = s.length();
        if(n==1) return 1;
        // char ch = s[n-1];
        int i = n-1;
        while( i>=0 && s[i]==' '){
            i--;
        }

        while( i>=0 && s[i]!=' '){
            ans++;
            i--;
        }
        return ans;
    }
};
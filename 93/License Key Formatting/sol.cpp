class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        s.erase(remove(s.begin(), s.end(), '-'), s.end());
        // cout<<s;
        int n = s.length();
        int m = n-1;
        for(int i=n-k;i>=0;i-=k){
            s.insert(i,"-");
        }
        if(s[0]=='-'){
            s.erase(s.begin());
        }
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i] = s[i]-32;
            }
        }
        return s;
    }
};
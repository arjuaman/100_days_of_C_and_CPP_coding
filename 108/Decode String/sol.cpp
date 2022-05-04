class Solution {
public:
    string decodeString(string s) {
        int pos=0;
        return helper(pos, s);
    }
    string helper(int &pos, string s){
        string ans = "";
        int num = 0;
        for(;pos<s.length();pos++){
            if(s[pos]=='['){
                string curStr = helper(++pos, s);
                //multiply num times
                for(;num>0;num--){
                    ans += curStr;
                }
            }
            else if(isdigit(s[pos])){
                //multiplier
                num = num *10 + (s[pos]-'0');
            }
            else if(s[pos]==']'){
                return ans;
            }
            else{
                //regular letter
                ans += s[pos];
            }
        }
            
        return ans;
    }
};
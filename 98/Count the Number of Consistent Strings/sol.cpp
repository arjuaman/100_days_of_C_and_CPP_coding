class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> st;
        for(char c:allowed){
            st.insert(c);
        }
        
        int res = 0;
        for(string s:words){
            bool flag = true;
            for(char c:s){
                if(!st.count(c)){
                    flag=false;
                    break;
                }
            }
            if(flag)
                res++;
        }
        
        return res;
    }
};
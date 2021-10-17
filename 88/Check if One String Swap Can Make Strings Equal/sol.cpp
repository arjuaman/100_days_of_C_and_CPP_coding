class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int numMis=0;
        int prev=-1, cur=-1;
        if(s1.length()!=s2.length()) return false;
        if(s1==s2) return true;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                numMis++;
                if(numMis>2)
                    return false;
                prev=cur;
                cur=i;
            }
        }
        // if(numMis!=0 && numMis!=2) return false;
               
        return numMis==2 && s1[prev]==s2[cur] && s1[cur]==s2[prev];
    }
};
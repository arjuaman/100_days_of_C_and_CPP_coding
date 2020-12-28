class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int right=0,left=0,len=0;
        vector <int> vec(256,-1);
        while(right<n){               //
            if(vec[s[right]]!=-1){    //
                left = max( left , vec[s[right]] + 1 );
            }
            vec[s[right]]=right;
            len = max( len, right-left+1);
            right++;
        }
        return len;
    }
};
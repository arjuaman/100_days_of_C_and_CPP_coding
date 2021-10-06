class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n==0) return 0;
		
        vector<int> vec(256,-1);
		
        int left=0,right=0,len=0;
		
        while(right<n){
			
            if(vec[s[right]] != -1)
                left = max(left,vec[s[right]]+1);
			
            vec[s[right]] = right;
			
            len = max(len,right-left+1);
			
            right++;
        }
        return len;
    }
};
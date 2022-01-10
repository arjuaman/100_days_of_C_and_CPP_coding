class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> count(256,0);
        for(char c:s){
            count[c]++;
        }
        
        int res=0;
        int odds=0;
        
        for(int c:count){
            // cout<<c<<" ";
            if(c%2==0){
                res += c/2;
            }
            else if(c>1){
                res += (c-1)/2;
                odds++;
            }
            else
                odds++;
        }
        // cout<<"\n"<<res;
        
        res *= 2;
        if(odds){
            res++;
        }
        
        return res;
    }
};
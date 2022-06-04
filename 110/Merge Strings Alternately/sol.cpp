class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1len = word1.length(), w2len = word2.length();
        if(w1len==0) return word2;
        if(w2len==0) return word1;
        string res;
        int smaller, longer;
        if(w1len!=w2len){
            smaller = w1len<w2len?w1len:w2len;
            longer  = w1len + w2len - smaller;
        }
        else
            smaller = w1len, longer = w1len;
        
        // cout<<"Smaller is: "<<smaller<<" longer is: "<<longer<<"\n";
        int i=0;
        for(i=0;i<smaller;i++){
            res += word1[i]; res += word2[i];
            // cout<<res<<' ';
        }
        for(i=smaller;i<longer;i++){
            if(i<word1.length()) res+=word1[i];
            if(i<word2.length()) res+=word2[i];
        }
        
        return res;
    }
};
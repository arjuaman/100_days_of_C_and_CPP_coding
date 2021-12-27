class Solution {
public:
    bool isLetter(char c){
        return (c>='a' && c<='z') || (c>='A' && c<='Z');
    }
    
    string reverseOnlyLetters(string s) {
        int n = s.length();
        int i=0, j=n-1;
        while(i<j){
            while(i<j && !isLetter(s[i])){
                i++;
            }
            while(i<j && !isLetter(s[j])){
                j--;
            }
            swap(s[i],s[j]);
            i++,j--;
        }
        
        return s;
    }
};
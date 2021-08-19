class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        // for(auto it:vowels){
        //     cout<<it<<" ";
        // }
        
        int n = s.length();
        int i=0, j=n-1;
        while(i<j){
            if(vowels.count(s[i])){
                while(i<j && !vowels.count(s[j]))
                    j--;
                swap(s[i],s[j]);
                j--;
            }
            i++;
        }
        
        return s;
    }
};
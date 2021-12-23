// idea is that we'll group the consecutive 0s and 1s and store in an array. then the common would be the least of two consecutive groups.
// eg: 0011101
// groups: {2,3,1,1}
// res = 4 because we can form 0011,01,10 and 01 only. 

class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.length();
        int res = 0;
        int i=0;
        vector<int> groups;
        while(i<n){
            int count=0;
            char cur=s[i];
            while(i<n && s[i]==cur){
                i++, count++;
            }
            groups.push_back(count);
        }
        
        for(int j=0;j<groups.size()-1;j++){
            res += min(groups[j],groups[j+1]);
        }
        
        return res;
    }
};
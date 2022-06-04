class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length(), ans=0;
        if(n<3) return 0;
        for(int i=0;i<n;i++){
            map<char,int> freq = {{'a',0},{'b',0},{'c',0}};
            for(int j=i;j<n;j++){
                freq[s[j]]++;
                if(freq['a']>0 && freq['b']>0 && freq['c']>0)
                    ans++;
            }
            // cout<<freq['a']<<" "<<freq['b']<<" "<<freq['c']<<" \n";
            // if(freq['a']>0 && freq['b']>0 && freq['c']>0)
            //     ans++;
        }
        return ans;
    }
};
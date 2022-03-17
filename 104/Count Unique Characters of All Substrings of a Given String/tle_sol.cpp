class Solution {
public:
    int uniqueLetterString(string s) {
        int ans = 0, n = s.length();
        map<string, int> freq;
        for (int i = 0; i < n; i++)
            for (int len = 1; len <= n - i; len++){
                string s1 = s.substr(i, len);
                if(freq.find(s1)==freq.end()){
                    //absent
                    vector<int> mpp(256, 0);
                    for(int j=0; j<s1.length(); j++){
                        mpp[s1[j]]++;
                    }
                    for(int j:mpp){
                        if(j==1)
                            freq[s1]++;
                    }
                    // freq[s1] = unq.size();
                }
                // cout<<s1<<" "<<freq[s1]<<"\n";
                ans += freq[s1];
            }
        
        return ans;
    }
};
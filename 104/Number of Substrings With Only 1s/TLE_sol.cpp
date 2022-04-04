#define mod 1000000007
class Solution {
    int ans = 0;
public:
    int numSub(string s) {
        int n = s.length();
//         for (int i = 0; i < n; i++){
//             for (int len = 1; len <= n - i; len++){
//                 // cout << s.substr(i, len) << endl;
                
//             }
//         }
        for (int i = 0; i < n; i++){
            char temp[n - i + 1];
            int tempindex = 0;
            bool flag = true;
            for (int j = i; j < n; j++){
                if(s[j]=='0'){
                    flag=false;
                    // break;
                }
                if(flag)
                 ans++;
            }
            
        }
        
        return ans%mod;
    }
};
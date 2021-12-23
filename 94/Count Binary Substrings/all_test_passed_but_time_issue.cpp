class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.length();
        int res = 0;
        int p = 0;
        for(int i=0;i<n;i++){
            int cur_count = 0, curmax=0;
            int j = i;
            if(s[j]=='0'){
                while(j<n && s[j]=='0')
                    j++, cur_count++;
                curmax = cur_count;
                while(j<n && s[j]=='1'){
                    j++;
                    cur_count--;
                    if(cur_count==0){
                        res++;
                        break;
                    }
                }
            }
            else{
                while(j<n && s[j]=='1')
                    j++, cur_count++;
                curmax = cur_count;
                while(j<n && s[j]=='0'){
                    j++;
                    cur_count--;
                    if(cur_count==0){
                        res++;
                        break;
                    }
                }
            }
        }
        
        return res;
    }
};
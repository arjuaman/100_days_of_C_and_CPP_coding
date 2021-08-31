class Solution {
public:
    int findLUSlength(string a, string b) {
        int na = a.length();
        int nb = b.length();
        if(na!=nb){
            return na>nb?na:nb;
        }
        if(a!=b)
            return na>nb?na:nb;
        
        int freq[256] = {0,};
        for(int i=0;i<na;i++){
            freq[a[i]]++;
        }
        for(int i=0;i<nb;i++){
            freq[b[i]]--;
        }
        
        for(int i=0;i<256;i++){
            if(freq[i]<0)
                return na>nb?na:nb;
        }
        return -1;
    }
};
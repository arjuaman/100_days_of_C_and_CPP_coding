// I got it wrong because I considered only the cases where all 0 need to be converted to 1 or vice-versa. 
// But many times we need to do both the operations.

class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n = s.length();
        cout<<n<<" ";
        int startSeOneIndex = 0;
        int lastSeZeroIndex = n-1;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                startSeOneIndex = i;
                cout<<startSeOneIndex<<" ";
                break;
            }
        }
        
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
                lastSeZeroIndex = i;
                cout<<lastSeZeroIndex<<" ";
                break;
            }
        }
        
        int ones=0, zeros=0;
        for(int i=startSeOneIndex;i<=lastSeZeroIndex;i++){
            if(s[i]=='1')
                ones++;
            else
                zeros++;
        }
        return min(ones,zeros);
    }
};
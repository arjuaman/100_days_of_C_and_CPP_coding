class Solution {
public:
    int findComplement(int num) {
        int i=0, j=0;
        while(i<num){
            // cout<<i<<"\n";
            i += pow(2,j);
            j++;
        }
        
        return i-num;
    }
};
class Solution {
public:
    int minFlipsMonoIncr(string str) {
        int minOnes=0, flips=0;
        for(char s:str){
            if(s=='1')
                minOnes++;
            else{
                flips = min(minOnes, flips+1);
            }
        }
        
        return flips;
    }
};
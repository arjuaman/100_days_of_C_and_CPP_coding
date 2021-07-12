class Solution {
public:
    bool isPower(int n){
        return (n!=0) && ((n&(n-1))==0);
    }
    int countPairs(vector<int>& d) {
        int cnt=0;
        
        for(int i=0;i<d.size();i++){
            for(int j=i+1;j<d.size();j++){            
                if(isPower(d[i]+d[j])){ 
                    cnt++;
            }
        }
        return cnt;
    }
};
class Solution {
    unordered_map<int,bool> mpp;
public:
    bool isPower(int n){
        return (n!=0) && ((n&(n-1))==0);
    }
    int countPairs(vector<int>& d) {
        int cnt=0;
        
        for(int i=0;i<d.size();i++){
            for(int j=i+1;j<d.size();j++){
                if(mpp.find(d[i]+d[j])!=mpp.end()){
                    if(mpp[d[i]+d[j]]==true)
                        cnt++;
                    continue;
                }
                if(isPower(d[i]+d[j])){
                    mpp[d[i]+d[j]] = true;  
                    cnt++;
                }
                else{
                    mpp[d[i]+d[j]] = false;
                }
            }
        }
        return cnt;
    }
};
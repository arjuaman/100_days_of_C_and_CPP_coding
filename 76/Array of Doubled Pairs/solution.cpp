class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        int n = arr.size();
        int halfn = n/2;
        sort(begin(arr),end(arr));
        
        map<int,int> mpp;
        for(int i:arr){
            mpp[i]++;
        }
        
        int i=0, cnt=0;
        while(i<n && cnt!=n){
            int cur = arr[i];
            if(mpp[cur]>0){
                if(mpp.find(2*cur)!=mpp.end() && mpp[2*cur]>0){
                    cnt+=2;
                    mpp[2*cur]--;
                    mpp[cur]--;
                }
            }
            
            i++;
        }
        
        for(auto it:mpp){
            if(it.second!=0)
                return false;
        }
        return true;
    }
};
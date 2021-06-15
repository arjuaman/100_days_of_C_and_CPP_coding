class Solution {
public:
    int maximumUnits(vector<vector<int>>& vec, int truckSize) {
        sort(vec.begin(), vec.end(),
          [](const std::vector<int>& a, const std::vector<int>& b) {
          return a[1] > b[1];
        });
        
        // for(auto v:vec){
        //     for(auto it:v){
        //         cout<<it<<" ";
        //     }
        //     cout<<"\n";
        // }
        
        int cnt=0;
        
            for(auto v:vec){
                if(truckSize<=0)
                    break;
                if(v[0]==truckSize){
                    cnt += v[1]*v[0];
                    return cnt;
                }
                else if(v[0]<truckSize){
                    cnt += v[1]*v[0];
                    truckSize -= v[0];
                }
                else if(v[0]>truckSize && truckSize>0){
                    cnt += truckSize*v[1];
                    truckSize = 0;
                }
            }
        
        return cnt;
    }
};
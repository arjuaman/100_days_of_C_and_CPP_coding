#define pb push_back
#define ll long long
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<float,vector<int>>> pq;
        for(auto coord:points){
            float dist = pow(coord[1], 2) + pow(coord[0], 2) * 1.0;
            // dist = sqrtBinarySearch(dist,5);
            dist = sqrtf(dist);
            cout<<dist<<" ";
            
            vector<int> temp(2,0);
            temp[0] = coord[0];
            temp[1] = coord[1];
            
            if(pq.size()<k)
                pq.push({dist, temp});
            else{
                pq.push({dist, temp});
                auto x = pq.top();
                pq.pop();
                if(abs(x.second[0]-pq.top().second[0])==1 && abs(x.second[1]-pq.top().second[1])==1 && abs(x.first-pq.top().first)<0.00000001){
                    pq.pop();
                    pq.push(x);
                }
                cout<<"Getting popped is: "<<x.first<<" "<<x.second[0]<<" "<<x.second[1]<<"\n";
            }
        }
        
        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();
            // cout<<top.first<<" :"<<top.second[0]<<" "<<top.second[1]<<'\n';
            ans.pb(top.second);
        }
        
        return ans;
    }
};
#define vvi vector<vector<int>>
#define vi vector<int>
#define pb push_back
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newi) {
        vvi ans;
        for(auto group:intervals){
            if(group[1]<newi[0]){
                ans.pb(group);
            }
            else if(newi[0]>=group[0] && newi[1]<=group[1]){
                newi=group;
            }
            else if(newi[0]==group[1]){
                newi[0]=min(newi[0],group[0]);
            }
            else if(group[0]>newi[1]){
                ans.pb(newi);
                newi=group;
            }
            else if(newi[0]<group[1] && newi[1]>=group[0]){
                newi[0]= min(newi[0],group[0]);
                newi[1]=max(newi[1],group[1]);
            }
            else if(newi[0]<group[1] && newi[1]>=group[1]){
                newi[0]= min(newi[0],group[0]);
                newi[1]= max(newi[1],group[1]);
            }
        }
        ans.pb(newi);
        return ans;
    }
};
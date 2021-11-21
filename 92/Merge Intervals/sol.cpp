class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector <vector<int>> out;
        if(intervals.empty()) return out;
        vector <int> temp;
        sort(intervals.begin(),intervals.end());
        temp=intervals[0];
        for(auto it:intervals){
            if(temp[1]>=it[0] && temp[1]>=it[1])
                continue;
            else if(temp[1]>=it[0]){
                temp[1]=it[1];
            }
            else{
                out.push_back(temp);
                temp=it;
            }
        }
        out.push_back(temp);
        return out;
    }
};
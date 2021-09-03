class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        int n = points.size();
        for(int i=0;i<n-1;i++){
            ans += max(abs(points[i+1][1]-points[i][1]), abs(points[i+1][0]-points[i][0]));
        }
        return ans;
    }
};
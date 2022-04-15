class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size(), cnt=0;
        for(int i=rows-1;i>=0;i--){
            for(int j=cols-1;j>=0;j--){
                if(grid[i][j]<0){
                    cnt++;
                }
                else{
                    break;
                }
            }
        }
        
        return cnt;
    }
};
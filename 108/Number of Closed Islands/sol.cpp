class Solution {
    int res = 0;
    bool flag = false;
public:
    int closedIsland(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int rows = grid.size(), cols = grid[0].size();
        // vector<int> auxRow(cols, 2), auxCol(rows, 2);
        // vector<vector<int>> newGrid(rows+2, vector<int>(cols+2, 2));
        // newGrid.push_back()
        int islandCnt = 0;
        vector<vector<bool>> vis(rows, vector<bool>(cols, false));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                flag = false;
                if(grid[i][j]==0 && !vis[i][j]){
                    islandCnt++;
                    
                    helper(grid,i,j,vis);
                    if(!flag)
                        res++;
                }
            }
        }
        return res;
    }
    
    void helper(vector<vector<int>>& grid, int i, int j, vector<vector<bool>>& vis){
        int rows = grid.size(), cols = grid[0].size();
        if(i<0 || j<0 || i>=rows || j>=cols){
            flag = true;
            return;
        }
        if(vis[i][j] || grid[i][j]==1)
            return;
        
        vis[i][j] = true;
        helper(grid,i+1,j,vis);helper(grid,i,j+1,vis);
        helper(grid,i-1,j,vis);helper(grid,i,j-1,vis);
    }
};
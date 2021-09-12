class Solution {
public:
    bool isSafe(vector<vector<int>>& grid, int i, int j){
        int row = grid.size();
        int col = grid[0].size();
        if(i<0 || j<0 || i>=row || j>=col)
            return false;
        return true;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int peri=0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    if(!isSafe(grid,i+1,j) || grid[i+1][j]==0) peri++;
                    if(!isSafe(grid,i,j+1) || grid[i][j+1]==0) peri++;
                    if(!isSafe(grid,i-1,j) || grid[i-1][j]==0) peri++;
                    if(!isSafe(grid,i,j-1) || grid[i][j-1]==0) peri++;
                }                    
            }
        }
        return peri;
    }
};
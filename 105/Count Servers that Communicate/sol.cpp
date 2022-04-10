class Solution {
    int ans = 0;
public:
    int countServers(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        
        // vector<vector<bool>> vis(row, vector<bool> (col, false));
        vector<int> row(rows,0), col(cols,0);
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==1){
                    // helper(i,j,row,col,grid);
                    row[i]++, col[j]++;
                }
            }
        }
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==1){
                    if(row[i]>1 || col[j]>1){
                        ans++;
                    }
                }
            }
        }
        
        return ans;
    }
    
//     bool isSafe(int i, int j, int row, int col, vector<vector<int>>& grid){
//         if(i<0 || j<0 || i>=row || j>=col || grid[i][j]==0){
//             return false;
//         }
//         return true;
//     }
    
//     void helper(int i, int j, int row, int col, vector<vector<int>>& grid){
//         if(!isSafe(i,j,row,col,grid)){
//             return;
//         }
//         // vis[i][j] = true;
//         if((isSafe(i+1,j,row,col,grid) && grid[i+1][j]==1) ||    
//            (isSafe(i,j+1,row,col,grid) && grid[i][j+1]==1) || 
//            (isSafe(i-1,j,row,col,grid) && grid[i-1][j]==1) || 
//            (isSafe(i,j-1,row,col,grid) && grid[i][j-1]==1)
//           ){
//             ans++;
//         }
//         // vis[i][j] = false;
//     }
};
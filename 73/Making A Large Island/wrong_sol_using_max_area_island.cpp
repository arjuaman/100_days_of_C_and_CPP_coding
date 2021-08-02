class Solution {
    int cnt=0;
public:
    int largestIsland(vector<vector<int>>& grid) {
        int area=0;
        int row = grid.size();
        int col = grid[0].size();
        bool hasZero = false;
        vector<vector<int>> visited(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                // int cnt=0;
                if(grid[i][j]==0){
                    hasZero = true;
                    grid[i][j] = 1;
                    cnt=0;
                    maxArea(grid, i, j, visited);
                    // cout<<"\nCount is: "<<cnt<<"\n";
                    area = max(area, cnt);
                    grid[i][j] = 0;
                }
                // else{
                //     cnt=0;
                //     maxArea(grid, i, j, visited);
                //     cout<<"\nCount is: "<<cnt<<"\n";
                //     area = max(area, cnt);
                // }
                // cout<<area<<" "<<grid[i][j]<<" ";
            }
        }
        if(!hasZero)
            return row*col;
        return area;
    }
    
    void maxArea(vector<vector<int>>& grid, int i, int j, vector<vector<int>> &visited){
        int m = grid.size(), n = grid[0].size();
        if (i>=m || i<0 || j>=n || j<0 || visited[i][j] == 1 || grid[i][j] == 0)
            return;
        
        visited[i][j] = 1;    
        // if (grid[i][j] == 1)
        cnt++;
        maxArea(grid, i-1, j, visited);
        maxArea(grid, i+1, j, visited);
        maxArea(grid, i, j-1, visited);
        maxArea(grid, i, j+1, visited);
        // visited[i][j]=0;
   }
    
};
#define ll long long
class Solution {
    int money=0;
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        vector<vector<bool>> vis(grid.size(),vector<bool> (grid[0].size(),false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]!=0){
                    helper(i,j,grid,vis,0);
                }
            }
        }
        return money;
    }
    
    void helper(int i, int j, vector<vector<int>>& grid, vector<vector<bool>> &vis, int curMax){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || vis[i][j]==true || grid[i][j]==0)
            return;
        
        vis[i][j]=true;
        curMax += grid[i][j];
        money = max(money, curMax);
        helper(i+1, j,   grid, vis, curMax);
        helper(i-1, j,   grid, vis, curMax);
        helper(i,   j+1, grid, vis, curMax);
        helper(i,   j-1, grid, vis, curMax);
        vis[i][j]=false;
    }
};
#define vvi vector<vector<int>>
#define vvb vector<vector<bool>>
#define vi vector<int>
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        if(mat.empty()) return vvi();
        vvb vis(mat.size(),vector<bool>(mat[0].size(),false));
        int row = mat.size(), col = mat[0].size();
        vvi ans(row,vi(col,0));
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]!=0){                    
                    ans[i][j]=helper(mat,i,j,row,col,vis,0);
                }
            }
        }
        
        return ans;
    }
    
    int helper(vvi& mat, int i, int j, int row, int col, vvb &vis,int val){
        if(i<0 || j>=col || i>=row || j<0 || vis[i][j] || val==INT_MAX)
            return INT_MAX;
        
        if(mat[i][j]==0){
            // cout<<val<<" ";
            return val;
        }
        
        vis[i][j] = true;
        
        int x = helper(mat,i+1,j,row,col,vis,val+1);
        int y = helper(mat,i-1,j,row,col,vis,val+1);
        int z = helper(mat,i,j+1,row,col,vis,val+1);
        int w = helper(mat,i,j-1,row,col,vis,val+1);
        
        vis[i][j] = false;
        //val-=1;
        return min(x,min(y,min(z,w)));
    }
};
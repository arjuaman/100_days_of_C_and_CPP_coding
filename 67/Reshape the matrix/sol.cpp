class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r,vector<int>(c,0));
        
        int x=0,y=0;
        int row=mat.size(), col = mat[0].size();
        
        if(r*c!=row*col)
            return mat;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++,y++){
                if(x<row && y<col){
                    ans[i][j] = mat[x][y];
                    //y++;
                }
                if(y==col-1){
                    y=-1;
                    x++;
                }
            }
        }
        
        return ans;
    }
};
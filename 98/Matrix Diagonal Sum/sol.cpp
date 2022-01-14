class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rows = mat.size();
        int sum = 0;
        for(int i=0;i<rows;i++){
            sum += mat[i][i];
        }
        
        if(rows&1){
            sum -= mat[rows/2][rows/2];
        }
        
        for(int i=rows-1, j=0;i>=0 && j<rows;i--,j++){
            sum += mat[i][j];
        }
        
        return sum;
    }
};
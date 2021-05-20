    int count(vector<vector<int> > &a,int row, int col){
        if(a[0][0]==1) return 0;
        if(a[row-1][col-1]==1) return 0;
        if(col==1){
            for(int i=0;i<row;i++){
                if(a[i][0]==1)
                    return 0;
            }
            return 1;
        }
        if(row==1){
            for(int i=0;i<col;i++){
                if(a[0][i]==1)
                    return 0;
            }
            return 1;
        }
        return count(a,row-1,col)+count(a,row,col-1);
    }
    
int Solution::uniquePathsWithObstacles(vector<vector<int> > &a) {
    int row = a.size();
    int col = a[0].size();
    return count(a,row,col);
}


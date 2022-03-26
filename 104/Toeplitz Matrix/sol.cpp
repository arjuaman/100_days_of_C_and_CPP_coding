class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) {
        if(m.empty()) return true;
        int row = m.size(), col = m[0].size();
        // int num_diag = row + col - 1;
        for(int i=0;i<row-1;i++){
            for(int j=0;j<col-1;j++){
                if(m[i][j] != m[i+1][j+1])
                    return false;
            }
        }
        return true;
    }
};
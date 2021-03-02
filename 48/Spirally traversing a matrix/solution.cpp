//Spirally traversing a matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top = 0, right = matrix[0].size() - 1;
        int left = 0, bottom = matrix.size() - 1;
        
        while(top <= bottom && left <= right){
            //top row
            for(int i = left; i <= right; i++)
                ans.push_back(matrix[top][i]);
            top++;
        
            //left colm
            for(int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;
            
            //bottom row
            if(top <= bottom){
                for(int i = right; i >= left; i--)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }
            
            //right colm
            if(left <= right){      
                for(int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }
        return ans;
    }
};
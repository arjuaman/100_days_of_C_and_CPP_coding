class Solution {
public:
    bool isSafe(int i, int j, vector<vector<int>>& img){
        int rows = img.size(), cols = img[0].size();
        if(i<0 || j<0 || i>=rows || j>=cols)
            return false;
        return true;
    }
    
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int rows = img.size(), cols = img[0].size();
        vector<vector<int>> ans = img;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                calcAvg(i,j,img,ans);
            }
        }
        
        return ans;
    }
    
    void calcAvg(int i,int j,vector<vector<int>>& img, vector<vector<int>>& ans){
        int sum = img[i][j],  cnt=1;
        if(isSafe(i,j+1,img)) sum+=img[i][j+1],cnt++;
        if(isSafe(i+1,j,img)) sum+=img[i+1][j],cnt++;
        if(isSafe(i-1,j,img)) sum+=img[i-1][j],cnt++;
        if(isSafe(i,j-1,img)) sum+=img[i][j-1],cnt++;
        if(isSafe(i+1,j+1,img)) sum+=img[i+1][j+1],cnt++;
        if(isSafe(i-1,j-1,img)) sum+=img[i-1][j-1],cnt++;
        if(isSafe(i+1,j-1,img)) sum+=img[i+1][j-1],cnt++;
        if(isSafe(i-1,j+1,img)) sum+=img[i-1][j+1],cnt++;
        ans[i][j] = floor((float)sum/cnt);
    }
    
    
};
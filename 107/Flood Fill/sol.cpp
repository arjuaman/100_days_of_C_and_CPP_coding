class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        //sr and sc are coordinates to start (sr, sc)
        vector<vector<bool>> vis(image.size(), vector<bool>(image[0].size(), false));
        int curColor = image[sr][sc];
        helper(image,vis,sr,sc,newColor, curColor);
        return image;
    }
    
    void helper(vector<vector<int>>& image, vector<vector<bool>> &vis, int i, int j, int newColor, int curColor){
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || vis[i][j] || image[i][j]!=curColor)
            return;
        vis[i][j] = true;
        image[i][j] = newColor;
        helper(image,vis,i+1,j,newColor, curColor);
        helper(image,vis,i,j+1,newColor, curColor);
        helper(image,vis,i-1,j,newColor, curColor);
        helper(image,vis,i,j-1,newColor, curColor);
    }
};
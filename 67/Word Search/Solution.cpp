class Solution {
    bool flag = false;
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(word=="")
            return true;
        vector<vector<bool>> visited(board.size(),vector<bool>(board[0].size(),false));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]==word[0]){
                    helper(i,j,board,visited,word,0);
                }
            }
        }
        return flag;
    }
    
    void helper(int i, int j, vector<vector<char>>& board, vector<vector<bool>> &vis, string word, int index){
        if(i<0 || j>=board[0].size() || i>=board.size() || j<0 
          || word[index]!=board[i][j] || vis[i][j]){
            return;
        }
        if(index==word.length()-1){
            flag=true;
            return;
        }
        vis[i][j]=true;
        helper(i+1,j,board,vis,word,index+1);
        helper(i-1,j,board,vis,word,index+1);
        helper(i,j+1,board,vis,word,index+1);
        helper(i,j-1,board,vis,word,index+1);
        vis[i][j]=false;
    }
};
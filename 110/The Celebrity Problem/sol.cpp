class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // returns the index of the celebrity
        int row = M.size(), col = M[0].size();
        set<int> celeb;
        for(int i=0;i<row;i++)
            celeb.insert(i);
            
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(M[i][j]==0 && i!=j){
                    if(celeb.count(j)){
                        celeb.erase(j);
                    }
                }
            }
        }    
        
        if(celeb.size()!=1)
            return -1;
        int ans;
        for(int i:celeb)
            ans = i;
        //column is ans
        for(int i=0;i<row;i++){
            if(M[ans][i]==1)
                return -1;
        }
        return ans;
    }
};
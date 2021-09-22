#define WHITE 0
#define RED 1
#define BLUE 2
class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> adj[n+1];
        int vis[n+1];
        memset(vis,0,sizeof(vis));
        vector<int> color(n+1, WHITE);
        
        for(auto vec:dislikes){
            adj[vec[0]].push_back(vec[1]);
            adj[vec[1]].push_back(vec[0]);
        }
        
        queue<int> q;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                color[i] = RED;
                q.push(i);
                
                while(!q.empty()){
                    int top = q.front();
                    q.pop();
                    
                    if(vis[top]) continue;
                    
                    vis[top] = 1;
                    for(auto child:adj[top]){
                        if(color[child]==color[top])
                            return false;
                        if(color[top]==RED)
                            color[child] = BLUE;
                        else
                            color[child] = RED;
                        
                        q.push(child);
                    }
                }
            }
        }
        return true;
    }
};
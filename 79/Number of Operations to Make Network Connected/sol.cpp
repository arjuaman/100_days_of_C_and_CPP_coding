class Solution {
    // int vis[100001];
public:
    void dfs(int src, vector<vector<int>>& adj, vector<bool> &vis){
	    vis[src]=1;
	    // cout<<src<<" \n";
	    for(int child:adj[src]){
		    if(!vis[child])
			    dfs(child, adj, vis);
	    }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n - 1)
            return -1;
        int cnt=0;
        vector<bool> vis(n, false);
        vector<vector<int>> adj(n);
        for(auto v : connections)
        {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        for(int i=0;i<n;i++){
            if(!vis[i])
                dfs(i, adj, vis), cnt++;
        }
        return cnt-1;
    }
};
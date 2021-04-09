#include <bits/stdc++.h>
using namespace std;
vector<int> ar[30001];
int vis[30001];
int size[30001];
int dfs(int src){
    vis[src]=1;
    //cout<<src<<"\n";
    int cursize=1;
    for(int child:ar[src]){
        if(!vis[child]){
            cursize+=dfs(child);
        }
    }
    size[src]=cursize;
    return cursize;
}
vector<int> componentsInGraph() {
    vector<int> ans(2);
    ans[0]=INT_MAX;
    ans[1]=INT_MIN;
    //[[1, 6],[2, 7], [3, 8], [4,9], [2, 6]]
    for(int i=0;i<40;i++){
        //int count=0;
        for(int child:ar[i]){
            int count=0;
            if(!vis[child]){
                //cout<<dfs(child)<<" ";
                count = dfs(child);
                ans[0] = min(ans[0],count);
                ans[1] = max(ans[1],count);
            }
        }
    }
    return ans;
}

int main()
{
	int n=5;
    //vector<vector<int>> gb(n);
    //gb = {{1, 6},{2, 7}, {3, 8}, {4,9}, {2, 6}};
	for(int i=1;i<=40;i++){
		int a,b;
		cin>>a>>b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	}

    vector<int> ans = componentsInGraph();
    //cout<<"ans \n";
	for(int it:ans){
        cout<<it<<" ";
    }
    return 0;
}

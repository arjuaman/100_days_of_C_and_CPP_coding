#include <bits/stdc++.h>
using namespace std;
struct Point{
	int x;
	int y;
	int count;
};
int dx[8] = {1,1,1,-1,-1,-1,0,0};
int dy[8] = {1,0,-1,1,-1,0,1,-1};
int shortestPath(vector<vector<int> > &grid, int row, int col){
	if(grid[0][0]==1)
		return -1;
	if(grid[row-1][col-1]==1)
		return -1;
	queue<Point> q;
	q.push({0,0,1});
	grid[0][0]=-1;
	while(!q.empty()){
		Point top = q.front();
		q.pop();
		if(top.x==row-1 && top.y==col-1)
			return top.count;
		for(int i=0;i<8;i++){
			int x = top.x + dx[i];
			int y = top.y + dy[i];

		if(x>=0 && y>=0 && x<row && y<col && grid[x][y]==0){
			q.push({x,y,top.count+1});
			grid[x][y]=-1;
		}
	}
	}
	return -1;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    vector<vector<int> > grid(6,vector<int>(6));
	    for(int i=0;i<6;i++){
	    	for(int j=0;j<6;j++){
	    		cin>>grid[i][j];
			}
		}
		
	int ans =  shortestPath(grid,6,6);
	if(ans==-1 || ans==0)
		cout<<"No\n";
	else
		cout<<"Yes\n";
	}
	return 0;
}


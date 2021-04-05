#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
string to_lower(string s) {        
    for(char &c : s)
        c = tolower(c);
    return s;
}
int main() {
	// your code goes here
	SPEED;
	int mat[5][5];
	pair<int,int> ind; 
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>mat[i][j];
			if(mat[i][j]==1){
				ind = {i,j};
			}
		}
	}
	int cnt= abs(ind.first - 2) + abs(ind.second - 2);
	cout<<cnt<<"\n";
	return 0;
}


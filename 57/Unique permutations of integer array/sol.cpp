#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define debug(n1) cout << n1 << endl
#define rep(i , j , n) for(ll i = j ; i <= n ; i++)
#define per(i , j , n) for(ll i = j ; i >= n ; i--)
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void generator(vector<int> curr, vector<vector<int>> &result, int i, vector<int> A, map<vector<int>,int> &hash){
    if(curr.size()==A.size()){
        if(hash.find(curr)==hash.end()){
            result.push_back(curr);
            hash[curr]=1;
        }
        return;
    }
    else{
        for(int j=i;j<A.size();j++){
            curr.push_back(A[j]);
            swap(A[i],A[j]);
            generator(curr,result,i+1,A,hash);
            curr.pop_back();
        }
    }
}
vector<vector<int> > permute(vector<int> &A) {
    vector<int> curr;
    vector<vector<int>> result;
    map<vector<int>,int> hash;
    generator(curr,result,0,A,hash);
    sort(result.begin(),result.end());
    return result;
}
int main() {
	
	SPEED;
	vi arr={1,1,2};
	vvi ans;
	ans = permute(arr);
	for(vi it:ans){
		for(int i:it){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
	return 0;
}



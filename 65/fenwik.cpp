#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define N 10000

void update(int i, int add){
    while(i<N){
        fen[i] += add;
        i += (i & (-i));
    }
}

int sum(int i){
    int s=0;
    while(i>0){
        s += fen[i];
        i -= (i & (-i)); 
    }
    return s;
}

int rangeSum(int l,int r){
    return sum(r) - sum(l-1);
}

int main() {
	// your code goes here
	SPEED;
	int fen[N];
    
	return 0;
}
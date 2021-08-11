#include <bits/stdc++.h>
using namespace std;
#define n 10

void slamLocker(vector<bool> &arr, int m){
    for(int i=m;i<n;i+=(m+1)){
        arr[i] = arr[i]==false?true:false;
    }
}

int main(){
    vector<bool> arr(n,true);
    for(int i=1;i<n;i++){
        slamLocker(arr,i);
    }

    for(auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}
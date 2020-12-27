#include <bits/stdc++.h>
using namespace std;
int stock(int arr[],int n){
  if(n==0) return 0;
  if(n==1) return arr[0];
  int pmax=0,buy=arr[0],sell=INT_MIN;
  for(int i=0;i<n;i++){
    buy = min(arr[i],buy);
    pmax = max(pmax,arr[i]-buy);
  }
  return pmax;
}
int main()
{
    int arr[]={7,1,5,3,6,4};
    //cout << "Hello world!" << endl;
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maxm profit is: "<<stock(arr,len);
    return 0;
}

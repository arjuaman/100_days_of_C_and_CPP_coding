#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int passlen,numkeys;
  cin>>passlen>>numkeys;
  string pass;
  cin>>pass;
  //cout<<pass;
  vector<string> keys;
  for(int i=0;i<numkeys;i++){
    string temp;
    cin>>temp;
    keys.push_back(temp);
  }
  int flag=0;
  //pass = xrups
  // keys = [tcr,prd,xru]
  for(int i=0;i<numkeys;i++){
    size_t found = pass.find(keys[i]); 
    if (found==0){
      flag=1;break;
    }
  }
  if(flag==1) cout<<"Yes";
  else cout<<"No";
  return 0;
}
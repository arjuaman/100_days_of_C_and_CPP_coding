int Solution::solve(vector<vector<int> > &A) {
    if(A.empty())  return 0;
    /* for(int i=0;i<A.size();i++){
        reverse(A[i].begin(),A[i].end());
    }
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++){
        reverse(A[i].begin(),A[i].end());
    }
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    int n = A.size();
    vector <int> temp = A[0];
    int res=INT_MIN,cnt=1;
    for(auto it:A){
        if(it==temp){
            continue;
        }
        if(it[0]>=temp[1]){
            cnt--;
            temp = it;
        }
        else{
            cnt++;
        }
        if(cnt>res){
            res = cnt;
        }
    }*/
    int n = A.size();
    vector<int> arr(n,0);
    vector<int> dep(n,0);
    for(int i=0;i<A.size();i++){
        arr[i]=A[i][0];
        dep[i]=A[i][1];
    }
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    int i=1,j=0;
    int res=1,cnt=1;
    while(i<n && j<n){
        if(arr[i]>=dep[j]){
            cnt--;
            j++;
        }
        else{
            cnt++;
            i++;
        }
        if(cnt>res){
            res = cnt;
        }
    }
    return res;
}

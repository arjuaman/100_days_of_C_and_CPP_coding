class Solution {
    int ndash;
public:
void slamLocker(vector<bool> &arr, int m){
    for(int i=m;i<ndash;i+=(m+1)){
        arr[i] = arr[i]==false?true:false;
    }
}
    
int bulbSwitch(int n) {
    if(n==0 || n==1) return n;
    ndash = n;
    vector<bool> arr(n,true);
    for(int i=1;i<n;i++){
        slamLocker(arr,i);
    }
    
    int cnt=0;
    for(bool i:arr){
        if(i==true)
            cnt++;
    }
    return cnt;
}
};
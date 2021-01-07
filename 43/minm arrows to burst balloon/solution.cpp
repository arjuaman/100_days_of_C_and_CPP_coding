class Solution {
public:
    static bool compare(vector<int> &a,vector<int>&b){
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty()) return 0;
        int n = points.size();
        if(n==1) return 1;
        /*vector<int> arr(n,0);
        vector<int> dep(n,0);
        for(int i=0;i<n;i++){
            arr[i]=points[i][0];
            dep[i]=points[i][1];
        }
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        */
        sort(points.begin(),points.end(),compare);
        int cnt=1,fl=42;
        vector<int> temp = points[0];
        for(auto it:points){
            //if(fl==42){
            //    fl=56;continue;
            //}
            if(it[0]>temp[1]){
                cnt++;
                temp=it;
            }
            //else if(it[0]<temp[1]){
            //    fl=42;
            //}
        }
        return cnt;
        /*int res=1,cnt=1;
        int i=1,j=0;
        while(i<n && j<n){
            if(arr[i]>dep[j]){
                j++;
                cnt++;
            }
            else{
                //cnt--;
                i++;
            }
            if(res<cnt)
                res=cnt;
        }
        if(j!=n-1 && arr[n-1]<dep[j])
            res -= 1;
        //res=max(res,cnt);
        return res;
        */
    }
};
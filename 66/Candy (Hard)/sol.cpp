class Solution {
public:
    int candy(vector<int>& v) {
        int n = v.size();
        //priority_queue<int,vector<int>,greater<int>> pq(v.begin(),v.end());
        if(n==1) return 1;
        int cnt=0;
        vector<int> dum(n,1);
        for(int i=0;i<n;i++){
            if(i==0){
                if(v[i]>v[i+1] && dum[i]<=dum[i+1])
                    dum[i] = dum[i+1]+1;
            }
            else if(i==n-1){
                if(v[i]>v[i-1]  && dum[i]<=dum[i-1])
                    dum[i] = dum[i-1]+1;
            }
            else{
                if(v[i]>v[i-1] && v[i]>v[i+1]  && (dum[i]<=dum[i+1] || dum[i]<=dum[i-1]))
                    dum[i] = 1 + max(dum[i-1],dum[i+1]);
                else if(v[i]>v[i-1]  && dum[i]<=dum[i-1])
                    dum[i] = 1 + dum[i-1];
                else if (v[i]>v[i+1]  && dum[i]<=dum[i+1])
                    dum[i] = 1 + dum[i+1];
            }
        }
        
        for(int i=n-1;i>=0;i--){
            if(i==0){
                if(v[i]>v[i+1] && dum[i]<=dum[i+1])
                    dum[i] = dum[i+1]+1;
            }
            else if(i==n-1){
                if(v[i]>v[i-1]  && dum[i]<=dum[i-1])
                    dum[i] = dum[i-1]+1;
            }
            else{
                if(v[i]>v[i-1] && v[i]>v[i+1]  && (dum[i]<=dum[i+1] || dum[i]<=dum[i-1]))
                    dum[i] = 1 + max(dum[i-1],dum[i+1]);
                else if(v[i]>v[i-1]  && dum[i]<=dum[i-1])
                    dum[i] = 1 + dum[i-1];
                else if (v[i]>v[i+1]  && dum[i]<=dum[i+1])
                    dum[i] = 1 + dum[i+1];
            }
        }
        
        for(int i=0;i<n;i++)
            cout<<dum[i]<< " ";
        cnt = accumulate(begin(dum),end(dum),0);
        return cnt;
    }
};
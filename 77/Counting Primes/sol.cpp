class Solution {
public:
    int countPrimes(int n) {
        //prime nos less than n
        if(n==0 || n==1)
            return 0;
        bool vis[n];
        //int sieve[n];
        for(unsigned int i=2;i<n;i++){
            vis[i]=false;
        }
        for(unsigned int i=2;i*i<n;i++){
            if(!vis[i]){
               // vis[i]=true;
                for(unsigned int j=i*i; j<n; j+=i){
                    vis[j]=true;
                }
            }
        }
        int cnt=0;
        vis[0]=vis[1]=true;
        for(unsigned int i=2;i<n;i++){
            if(!vis[i])
                 cnt++;
            //cout<<vis[i]<<" ";
        }
        return cnt;
    }
};
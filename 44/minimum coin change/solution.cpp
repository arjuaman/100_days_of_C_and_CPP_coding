class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(coins.empty()) return 0;
        if(amount==0) return 0;
        sort(coins.begin(),coins.end());
        int n = coins.size();
        if(n==1){
            int a = coins[0];
            if(a==amount)
                return 1;
            else if(amount%a!=0)
                return -1; 
        }
        int j = n-1;
        int cnt=0;
        int tgt = amount;
        vector<int> numways(amount+1,99999999);
        numways[0]=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=amount;j++){
                if(j>=coins[i]){
                    numways[j] = min(numways[j], numways[j-coins[i]]+1);
                }
            }
        }
        //cout<<"j is: "<<j<<endl;
        //for(int i=0;i<numways.size();i++){
        //    cout<<numways[i]<<" ";
        //}
        int x = numways.size();
        cnt = numways[x-1];
        if(cnt==99999999)
            cnt = -1;
        return cnt;
    }
};
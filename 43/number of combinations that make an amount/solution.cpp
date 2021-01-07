class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(coins.empty()) return 0;
        if(amount==0) return 0;
        sort(coins.begin(),coins.end());
        int n = coins.size();
        int j = n-1;
        int cnt=0;
        int tgt = amount;
        vector<int> numways(amount+1,0);
        numways[0]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<=amount;j++){
                if(j>=coins[i]){
                    numways[j] = numways[j] + numways[j-coins[i]];
                }
            }
        }
        cout<<"j is: "<<j<<endl;
        for(int i=0;i<numways.size();i++){
            cout<<numways[i]<<" ";
        }
        cnt = numways[j-1];
        return cnt;
    }
};
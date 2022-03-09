class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n&1){//odd
            ans.push_back(0);
            n-=1;
            for(int i=1;i<=n/2;i++)
                ans.push_back(i);
            for(int i=1;i<=n/2;i++)
                ans.push_back(-1*ans[i]);
        }
        else{//even
            for(int i=1;i<=n/2;i++)
                ans.push_back(i);
            for(int i=0;i<n/2;i++)
                ans.push_back(-1*ans[i]);
        }
        
        return ans;
    }
};
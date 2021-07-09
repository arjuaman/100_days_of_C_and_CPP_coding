class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        int sum = accumulate(p.begin(),p.end(),0);
        if(sum<=limit)
            return 1;
        int n = p.size();
        if(n==1) return 1;
        sort(p.begin(),p.end());
        int left=0, right=n-1;
        int ans=n;
        while(left<right){
            if(p[left]+p[right] <= limit){
                ans-=1;
                left+=1;
            }
            right-=1;
        }
        return ans;
    }
};
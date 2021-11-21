class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        int start=0,n=nums.size(),cursum=0;
        if(n==1 && k!=nums[0]) return 0;
        unordered_map<int,int> umap;
        //for(int i=0;i<n;i++){
        //    cursum += nums[i];
        //    umap[cursum] = i;
        //}
        cursum=0;
        for(int i=0;i<n;i++){
            cursum += nums[i];
            if(cursum==k)
                cnt++;
            if(umap.find(cursum - k)!=umap.end()){
                cnt+=umap[cursum-k];
            }
            umap[cursum]++;
        }
    return cnt;
    } 
};
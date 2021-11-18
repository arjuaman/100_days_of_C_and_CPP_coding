class Solution {
public:
    int findLHS(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int n = nums.size();
        //sort(nums.begin(),nums.end()); // [1,3,2,2,5,2,3,7] [1,2,2,2,3,3,5,7]
        unordered_map<int,int> umap;
        for(int i=0;i<n;i++){
            umap[nums[i]]++;
        }
        //int temp = nums[0];    //temp = 1
        int runlen=0, maxlen=0;
        int curr;
        for(auto it:umap){
            //cout<<it.first<<" "<<it.second<<"\n";
            curr= it.first;
            if(umap.find(curr+1) != umap.end()){
                runlen = it.second + umap[curr+1];
            }
            maxlen = max(runlen,maxlen);
        }
        if(maxlen==1) maxlen=0;
        return maxlen;
    }
};
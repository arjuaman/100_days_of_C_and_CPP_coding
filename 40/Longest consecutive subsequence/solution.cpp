class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n==0) return 0;
        if(n==1) return 1;
        int mlen=0,temp;
        unordered_set<int> uset;
        for(int i=0;i<n;i++){
            uset.insert(nums[i]);
        }
        if(uset.size()==1) return 1;
        //unordered_set<int> :: iterator itr; 
        //for (itr = uset.begin(); itr != uset.end(); itr++) 
        //    cout << (*itr) << endl;
        sort(nums.begin(),nums.end());
        nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
        for(int i=0;i<n;i++){
            temp=0;
            if(uset.find(nums[i]-1)==uset.end()){
                temp=1;
                int x = i;
                while(x+1<n &&  (nums[x+1]==nums[x]+1)){
                    temp++;
                    x++;
                }
                if(temp>mlen)
                    mlen=temp;
            }
        }
        return mlen;
    }
};
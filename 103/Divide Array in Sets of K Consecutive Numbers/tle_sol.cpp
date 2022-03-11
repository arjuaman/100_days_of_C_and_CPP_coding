class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();
        if(n%k)
            return false;
        int cur=0, target = n/k;
        
        sort(nums.begin(), nums.end());
        unordered_map<int, int> freq;
        set<int> s(nums.begin(), nums.end());
        
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        
        set<int>::iterator i;
        for(i = s.begin(); i != s.end();){
            vector<int> bag;
            int start = *i;
            for(int j=0;j<k;j++){
                if(!s.count(start)){
                    // cout<<"\n"<<start<<" not found.";
                    break;
                }
                if(freq.find(start)!= freq.end()){
                    auto itr = freq.find(start);
                    if(itr->second<=0){
                        // cout<<"\n"<<start<<" has less second.";
                        break;
                    }
                }
                freq[start]--;
                if(freq[start]<=0)
                    i++;
                bag.push_back(start);
                // cout<<start<<" ";
                start++;
                
            }
            // cout<<start<<" ";
            if(bag.size()==k)
                cur++;
        }
        cout<<cur;
        return cur==target;
    }
};
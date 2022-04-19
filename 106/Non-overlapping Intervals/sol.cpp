class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& vec) {
        if(vec.empty() || vec.size()==1) return 0;
         
        sort(vec.begin(), vec.end(), [](const std::vector<int>& a, const std::vector<int>& b){
            return a[1] < b[1];
        });
        
        vector<int> temp = vec[0];
        // vector<vector<int>> sample;
        // sample.push_back(temp);
        int ans = 0;
        
        for(int i=1;i<vec.size();i++){
            if(vec[i][0]<temp[1]){
                //overlap
                ans++;
            }
            else{
                temp = vec[i];
            }
        }
        
        return ans;
    }
};
class Solution {
public:
    int helper(vector<string>& arr, string str, int curr){
        unordered_set<char> vis;
        for(int i=0;i<str.size();i++){
            vis.insert(str[i]);
        }
        
        if(str.size()!=vis.size())
            return 0;
        
        int ans=str.length();
        for(int i=curr;i<arr.size();i++){
            int smallans=helper(arr, str+arr[i], i+1);
            ans=max(smallans, ans);
        }
        
        return ans;
    }
    
    int maxLength(vector<string>& arr) {
        string str="";
        return helper(arr, str, 0);
    }
};
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        priority_queue<int, vector<int>, greater<int>> minheap(arr.begin(), arr.end());
        
        int prev = minheap.top();
        minheap.pop();
        int minGap = minheap.top() - prev;

        
        while(!minheap.empty()){
            // cout<<minheap.top()<<" ";
            int curGap = minheap.top() - prev;
            if(curGap == minGap){
                vector<int> temp(2);
                temp[0] = prev;
                temp[1] = minheap.top();
                ans.push_back(temp);
            }
            if(curGap<minGap){
                ans.clear();
                vector<int> temp(2);
                temp[0] = prev;
                temp[1] = minheap.top();
                ans.push_back(temp);
                minGap = curGap;
            }
            prev = minheap.top();
            minheap.pop();
        }
        
        return ans;
    }
};
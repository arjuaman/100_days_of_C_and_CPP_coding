class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq(nums.begin(), nums.end());
        int a = pq.top();
        pq.pop();
        return (a-1)*(pq.top()-1);
    }
};
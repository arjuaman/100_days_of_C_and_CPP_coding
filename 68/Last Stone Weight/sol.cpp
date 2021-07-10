class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int> pq(begin(s),end(s));
        while(pq.size()>1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            pq.push(x-y);
        }
        return pq.top()?pq.top():0;
    }
};
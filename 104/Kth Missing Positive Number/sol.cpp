class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> sol;
        set<int> s(arr.begin(), arr.end());
        int i=1, n=k;
        while(n){
            if(!s.count(i)){
                sol.push_back(i);
                n--;
            }
            i++;
        }
        
        for(int j:sol)
            cout<<j<<" ";
        
        return sol[k-1];
    }
};
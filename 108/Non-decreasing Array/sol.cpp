class Solution {
public:
    bool checkPossibility(vector<int>& a) {
        int n = a.size();
        if(n<=2) return true;
        int change = 0, prev = a[0];
        for(int i=1;i<n;i++){
            if(prev>a[i] && change++)
                return false;             //more than 1 value needs to be changed
            if(prev>a[i] && i-2>=0 && a[i-2]>a[i])
                continue;
            prev = a[i];
        }
        
        return true;
    }
};
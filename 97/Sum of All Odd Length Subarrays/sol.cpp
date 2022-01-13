class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        
        for(int i=0;i<n;i++){
            int curLength = 0, curSum = 0;
            for(int j=i;j<n;j++){
                curLength++;
                if(curLength & 1){
                    curSum = accumulate(arr.begin()+i, arr.begin()+i+curLength, 0);
                    // cout<<curSum<<" ";
                    sum += curSum;
                }
            }
            
        }
        
        return sum;
    }
    
};
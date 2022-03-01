class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = accumulate(arr.begin(), arr.end(), 0);
        if(sum%3)
            return false;
        int req = sum/3;
	    int partSum = 0, count=0;
	    
	    for(int i:arr){
            partSum += i;
            if(partSum==req){
                count++;
                partSum = 0;
            }
        }
        
        return count>=3;
    }
};
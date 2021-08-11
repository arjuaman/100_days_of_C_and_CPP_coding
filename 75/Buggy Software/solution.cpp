// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // isBadVersion()
        if(isBadVersion(1)) return 1;
        if(isBadVersion(n) && !isBadVersion(n-1)) return n;
        int left=1, right = n;
        while(left<=right){
            int mid = left + (right-left)/2;
            // cout<<mid<<" ";
            if(isBadVersion(mid) && !isBadVersion(mid-1))
                return mid;
            else if(isBadVersion(mid-1)){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        
        return 0;
    }
};
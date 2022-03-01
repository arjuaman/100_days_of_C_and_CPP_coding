class Solution {
public:
    vector<int> diStringMatch(string s) {
        int m = s.length();
        vector<int> arr(m+1,0);
        int n = arr.size(), l=0, r=m;
        for(int i=0;i<n-1;i++){
            if(s[i]=='I'){
                arr[i]=l++;
                /*
                arr[0] = 0, l=1;
                arr[2] = 1, l=2;
                */
            }
            if(s[i]=='D'){
                arr[i] = r--;
                /*
                arr[1] = 4, r=3;
                arr[3] = 3, r=2;
                */
            }
        }
        
        arr[m] = l;  //arr[4]=2
        
        return arr;
    }
};
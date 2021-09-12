class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        // if(right>=10 && left<10)
        //     for(int i=left;i=9;i++)
        //         ans.push_back(i), left++;
        // if(right<10){
        //     for(int i=left;i<=right;i++)
        //         ans.push_back(i), left++;
        //     return ans;
        // }
        
        for(int i=left;i<=right;i++){
            int n = i;
            bool every = true;
            while(n!=0){
                int temp = n%10;
                n/=10;
                if(temp==0)
                    every=false;
                if(temp!=0 && i%temp!=0){
                    every=false;
                    break;
                }
            }
            if(every) ans.push_back(i);
        }
        return ans;
    }
};
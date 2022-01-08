class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char cur, res;
        int ans=INT_MAX;
        bool flag = false;
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target){
                cur = letters[i];
                // ans = letters[i] - 'a';
                flag = true;
            }
            if(cur>target && cur>='a' && cur<='z'){
                // cout<<"\nans is: "<<ans<<" and cur - 'a' is: "<<cur-'a';
                ans = min(ans, cur-'a');
            }
        }
        
        if(flag){
            return 'a'+ans;
        }
        
        target = target - 26;
        return nextGreatestLetter(letters, target);
    }
};
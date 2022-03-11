class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> count(256, 0);
        for(int i=0;i<chars.length();i++){
            count[chars[i]]++;
        }
        
        int ans = 0;
        
        for(int i=0; i<words.size(); i++){
            vector<int> temp = count;
            
            for(int j=0;j<words[i].size();j++){
                temp[words[i][j]]--;
            }
            
            bool flag = true;
            for(int k=0;k<256;k++){
                if(temp[k]<0){
                    flag = false;
                    break;
                }
            }
            
            if(flag){
                ans += words[i].length();
            }
        }
        
        return ans;
    }
};
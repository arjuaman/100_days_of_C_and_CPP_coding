class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> out,postn;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]==c){
                postn.push_back(i);
            }
        }
        for(int i=0;i<n;i++){
            //if(s[i]!=c){
                int minm = INT_MAX,temp;
                for(int j=0;j<postn.size();j++){
                    temp = abs(postn[j]-i);
                    if(temp<minm){
                        minm = temp;
                    }
                }
                out.push_back(abs(minm));
            //}
        }
        
        return out;
    }
};
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int m = word1.size();
        int n = word2.size();
        string temp="";
        for(int i=0;i<m;i++){
            temp += word1[i];
        }
        //cout<<temp;
        string temp1="";
        for(int i=0;i<n;i++){
            temp1 += word2[i];
        }
        //cout<<temp1;
        if(temp.compare(temp1)==0)
            return true;
        return false;
    }
};
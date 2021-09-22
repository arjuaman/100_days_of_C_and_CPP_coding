struct compare {
    inline bool operator()(const std::string& first,
            const std::string& second) const
    {
        return first.size() > second.size();  //decr
    }
};
class Solution {
public:
    bool isClean(string s){
        int freq[256]={0,};
        for(char ch:s){
            freq[ch]++;
        }
        for(int i=0;i<256;i++){
            if(freq[i]>1)
                return false;
        }
        return true;
    }
    int maxLength(vector<string>& arr) {
        string ans="";
        string temp="";
        int maxlen=0;
        compare c;
        sort(arr.begin(), arr.end(), c);
        // for(auto s:arr)
        //     cout<<s<<" ";
        for(int i=0;i<arr.size();i++){
            temp = "";
            if(isClean(arr[i]))
                temp+=arr[i];
            ans = temp;
            for(int j=i+1;j<arr.size();j++){
                temp+=arr[j];
                if(isClean(temp))
                    ans = temp;
                else
                    temp = ans;
            }
            int n = temp.size();
            maxlen = max(maxlen, n);
        }
        // cout<<ans;
        return maxlen;
    }
};
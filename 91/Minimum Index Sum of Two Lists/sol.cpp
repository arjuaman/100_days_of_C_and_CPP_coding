class Solution {
public:
    
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int> freq, lag;
        map<string,float> ans;
        int i=1;
        for(string s:list1){
            freq[s]=i;
            i++;
        }
        i=1;
        for(string s:list2){
            lag[s]=i;
            if(freq.find(s)!=freq.end()){
                ans[s] = ((float)freq[s] + lag[s])/2;
            }
            i++;
        }
        vector<string> res;
        multimap<float, string> MM;
        for (auto& it : ans) {
            MM.insert({ it.second, it.first });
        }
        float anskey = MM.begin()->first;
        // cout<<anskey<<"\n";
        for(auto& it:MM){
            // cout<<it.first<<" "<<it.second<<"\n";
            if(it.first==anskey)
                res.push_back(it.second);
        }
        return res;
    }
};
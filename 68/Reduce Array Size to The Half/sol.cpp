class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> umpp;
        for(int i=0;i<arr.size();i++){
            umpp[arr[i]]++;
        }
        
        int n = arr.size();
        int midv = ceil(n/2);
        //cout<<midv;
        int ans=0, curcnt=0;
        
        multimap<int,int> mm;
        for(auto it:umpp){
            mm.insert({it.second,it.first});
        }
        
        multimap<int, int>::reverse_iterator it;
        for (it = mm.rbegin(); it != mm.rend(); it++) {
            //cout<<it->first<<" "<<it->second<<endl;
            
            curcnt += it->first;
            ans += 1;
            //cout<<curcnt<<" ";
            if(curcnt>=midv){
                break;
            }
        }
        
        // for (auto it:mm) {
        //     curcnt += it.first;
        //     ans += 1;
        //     //cout<<curcnt<<" ";
        //     if(curcnt>=midv){
        //         break;
        //     }
        // }
        return ans;
    }
};
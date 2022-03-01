class Solution {
public:
    bool static comp(int a, int b){
        int cnt1=0, cnt2=0;
        int n=a, m=b;
        while(a){
            a = a&(a-1);
            // cout<<a<<" ";
            cnt1++;
        }
        // cout<<"\n";
        while(b){
            b = b&(b-1);
            // cout<<b<<" ";
            cnt2++;
        }
        
        if(cnt1==cnt2){
            return (n<=m);
        }
        else{
            return (cnt1<cnt2);
        }
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        // map<int,int> hashmap;
        // sort(arr.begin(), arr.end());
        sort(arr.begin(), arr.end(), comp);
        return arr;
    }
};
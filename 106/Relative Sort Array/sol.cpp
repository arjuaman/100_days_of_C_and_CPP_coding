class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> freq;
        for(int i:arr1){
            freq[i]++;
        }
        
        int pos=0;
        for(int i:arr2){
            while(freq[i]-- > 0){
                arr1[pos++] = i;        
            }
        }
        for(auto i:freq){
            while(i.second-- > 0)
                arr1[pos++] = i.first;
        }
        
        return arr1;
    }
};
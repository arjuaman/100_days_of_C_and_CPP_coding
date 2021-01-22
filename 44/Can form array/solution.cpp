class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int i,j,k;
        vector<vector<int>> storage;
        for(i=0;i<arr.size();i++){
            for(j=i;j<arr.size();j++){
                vector<int> temp;
                for(k=i;k<=j;k++){
                   temp.push_back(arr[k]);    
                }
                storage.push_back(temp);
            }
        }
        /*for(auto it:storage){
            for(auto itr:it){
                cout<<itr<<" ";
            }
            cout<<endl;
        }*/
        int flag = 1;
        vector<vector<int>>::iterator it;
        for(i=0;i<pieces.size();i++){
            it = find (storage.begin(), storage.end(), pieces[i]); 
            if(it==storage.end()){
                flag=0;
                break;
            }
        }
        if(flag==0)
            return false;
        return true;
    }
};
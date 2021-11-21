class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        if(n==0) return 0;
        unordered_map<int,int> umap,value;
        string rom ="IVXLCDM";
        int val[7] = {1  ,5  ,10 ,50 ,100,500,1000};
        for(int i=0;i<7;i++){
            umap[rom[i]] = i;        // priority order
            value[rom[i]] = val[i];  // values to roman mapping
        }
        //cout<<value['X'];
        // 0:I ,1:V, 2:X, 3:L, 4:C, 5:D, 6:M = umap
        // 
        // s = "M C M X C I V"
        int numb=0;
        for(int i=n-1;i>=0;i--){
            char x = s[i]; // V
            if(i != n-1){
                int curind = umap[x];
                int nextind = umap[s[i+1]];
                if(nextind > curind){
                    numb -= value[x];
                }
                else{
                    numb += value[x];
                }
            }
            else{
                numb += value[x];
                //cout<<"\n x is: "<<value[x]<< " and Last number is: "<<numb<<endl;
            }
        }
        
        return numb;
    }
};
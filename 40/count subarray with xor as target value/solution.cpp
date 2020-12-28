int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> umap;
    int n =A.size();
    int cnt=0, prefixXor=0;
    for(int i=0;i<n;i++){
        
        prefixXor = prefixXor^A[i];
        if(prefixXor==B){
            cnt++;
        }
        
        if(umap.find(prefixXor^B)!=umap.end()){
            cnt += umap[prefixXor^B];
        }
        umap[prefixXor] += 1;
    }
    return cnt;
}

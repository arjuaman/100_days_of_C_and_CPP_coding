
int maxLen(int a[], int n)
{
    // Your code here
    if(n==0) return 0;
    if(n==1 && a[0]==0) return 1;
    if(n==1 && a[0]!=0) return 0;
    unordered_map <int,int> umap;
    int maxm=0,temp;
    int sum=0;
    for(int i=0;i<n;i++){
        sum += a[i];
        if(sum==0){
            maxm = i+1;
            //continue;
        }
        else if(umap.find(sum)!=umap.end()){
            temp = i - umap[sum];
            if(temp>maxm)
                maxm=temp;
        }
        else{
            umap.insert(make_pair(sum,i));
        }
    }
    return maxm;
}
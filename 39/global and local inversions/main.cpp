#include <bits/stdc++.h>
using namespace std;
int countLocalInv(vector<int> A){
        if(A.empty() || A.size()==1) return 0;
        int n = A.size();
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if(A[i]>A[i+1])
                cnt++;
        }
        return cnt;
    }
    int merge(vector<int> A,vector<int> temp,int left,int mid,int right){
        int inv_count=0;
        int i=left;
        int j=mid;
        int k=right;
        while((i<=mid-1)&&(j<=right)){
            if(A[i]<=A[j])
                temp[k++]=A[i++];
            else{
                temp[k++]=A[j++];
                inv_count += (mid-i);
            }
        }
        while(i<=mid-1)
            temp[k++]=A[i++];
        while(j<=right)
            temp[k++]=A[j++];
        for(int i=left;i<=right;i++){
            A[i]=temp[i];
        }
        return inv_count;
    }
    int merge_sort(vector<int> A,vector<int> temp,int left,int right){
        int inv_count=0,mid;
        if(left<right){
            mid = left + (right-left)/2;
            inv_count += merge_sort(A,temp,left,mid);
            inv_count += merge_sort(A,temp,mid+1,right);
            inv_count += merge(A,temp,left,mid+1,right);
        }
        return inv_count;
    }
    int countGlobalInv(vector<int> A){
        if(A.empty()) return 0;
        int n = A.size();
        if(n==1) return 0;
        vector<int> temp(n);
        return merge_sort(A,temp,0,n-1);
    }
    bool isIdealPermutation(vector<int>& A) {
        int x = countLocalInv(A);
        int y = countGlobalInv(A);
        return x==y;
    }
int main()
{
    vector<int> A = {1,0,3,2};
    if(isIdealPermutation(A))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}

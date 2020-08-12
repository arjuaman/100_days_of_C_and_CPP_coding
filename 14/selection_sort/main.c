#include <stdio.h>
#include <stdlib.h>
void selection_sort(int arr[],int);
int smallest(int arr[],int,int);
int main()
{
    int n,arr[10],i,j,k;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    printf("\n Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
    return 0;
}
void selection_sort(int arr[],int n){
    int pos,spos,temp,j,k,xarr[10];
    //spos=smallest(arr,n);

    for(int i=0;i<n;i++){ //0 1 2 3 4      7 2 3 5 8
            for(j=i;j<n;j++) {  //4 3 2 1
            spos=smallest(arr,i,n);
            //printf("%d",spos);
            if(j==spos){
                temp=arr[spos];
                arr[spos]=arr[i];
                arr[i]=temp;
            }
            }
    }
}
int smallest(int arr[],int k,int n){
    //printf("%d",k);
    int s_pos=k,small=arr[k],i;
    for(i=k+1;i<n;i++){
        if(arr[i]<small){
            s_pos=i;
            small=arr[i];
        }
    }

    return s_pos;
}

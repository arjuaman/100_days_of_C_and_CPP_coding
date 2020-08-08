#include <stdio.h>
#include <stdlib.h>
void read_disp(int arr[],int);
void swap_small_big(int xarr[],int);
int main()
{
    int n,num[10];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    read_disp(num,n);
    printf("\n");
    swap_small_big(num,n);
    return 0;
}
void read_disp(int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n ----------------------------------------- \n");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}
void swap_small_big(int xarr[],int n){
    int small=99999999,large=-99999999,lpos,spos,temp;
    for(int i=0;i<n;i++){
        if(xarr[i]>large){
            large=xarr[i];
            lpos=i;
        }
        if(xarr[i]<small){
            small=xarr[i];
            spos=i;
        }
    }
    //printf("  %d  %d  ",xarr[lpos],xarr[spos]);
    for(int i=0;i<n;i++){
        if(i==spos){
            temp=xarr[spos];
            xarr[spos]=xarr[lpos];
            xarr[lpos]=temp;
        }
    }
     for(int i=0;i<n;i++){
        printf(" %d ",xarr[i]);
    }
}

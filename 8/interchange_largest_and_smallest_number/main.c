#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,temp,arr[20],large=-99999999,small=99999999,lpos,spos;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\n enter the element at %d position ",i);
        scanf("%d",&arr[i]);
        if(arr[i]>large){
            large=arr[i];
            printf("\n \t Temporarily largest at %d position",i);
            lpos=i;
            }
        if(arr[i]<small){
            small=arr[i];
            printf("\n \t Temporarily smallest at %d position",i);
            spos=i;
            }
    }
    for(int j=0;j<n;j++){
        //printf("\n This is the initial array: \n");
        printf(" %d ",arr[j]);
    }
    printf("\n");
    for(int j=0;j<n;j++){
        if(j==lpos){
                temp=arr[j];
                arr[j]=arr[spos];
                arr[spos]=temp;
    }}
    for(int j=0;j<n;j++){
        //printf("This is the array after the required operation: \n");
        printf(" %d ",arr[j]);
    }
    return 0;
}

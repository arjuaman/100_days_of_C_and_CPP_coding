#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,temp,j,k,arr[20]={0};
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(j=0;j<n;j++){
    for(i=0;i<n-j-1;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}

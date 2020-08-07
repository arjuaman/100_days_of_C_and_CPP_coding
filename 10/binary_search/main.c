#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n,num,temp,arr[10],pos=0,beg,mid,end;
    printf("Enter the length of the array: ");
    scanf("%d",&n);printf("\n");
    for(int k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    for(int k=0;k<n;k++){
        printf("%d",arr[k]);
    }
    printf("\nEnter the number to be searched: ");
    scanf("%d",&num);
    beg=0;end=n-1;mid=(beg+end)/2;
    printf("%d",mid);
    while(beg<=end){
            mid=(beg+end)/2;
        if(arr[mid]==num){
            printf("Number found at position %d ",mid);
            break;
        }
        else if(num<arr[mid]){
            end=mid-1;
        }
        else if(num>arr[mid]){
            beg=mid+1;

        }
    }

    return 0;
}

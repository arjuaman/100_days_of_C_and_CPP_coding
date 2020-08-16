#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,arr[10];
    int *xarr=arr;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        scanf("%d",xarr+i);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf(" %d ",*(xarr+i));
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,arr[20],large=-9999999;
    int *pn=&n;
    int *parr=arr;
    int *plarge=&large;
    printf("\n Enter the quantity(<20): ");
    scanf("%d",pn);
    for(i=0;i< *pn;i++){
        scanf("%d",(parr+i));
        if(*(parr+i) > *plarge)
            *plarge=(*(parr+i));
    }
    printf("\n %d is the largest number.",*plarge);
    return 0;
}

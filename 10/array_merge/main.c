#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n1,n2,num,arr[10],xarr[10],sum[20];
    int pos=0;
    printf("\n Enter the number of elements of the first array: ");
    scanf("%d",&n1);
    printf("\n\n Enter the elements of the first array: \n");
    for(i=0;i<n1;i++){
        scanf("%d",&arr[i]);printf("\n");
    }
    printf("\n Enter the number of elements of the second array: ");
    scanf("%d",&n2);
    printf("\n\n Enter the elements of the second array: \n");
    for(i=0;i<n2;i++){
        scanf("%d",&xarr[i]);printf("\n");
    }
    for(i=0;i<n1;i++){
        sum[i]=arr[i];
        pos=pos+1;
    }
    //printf("%d",pos);
    //for(i=0;i<n1;i++){
    //   printf(" %d ",sum[i]);
    //}
    printf("\n\n");
    for(i=0,j=pos;i<n2;i++,j++){
        sum[j]=xarr[i];
    }
    printf("\n\n");
    for(i=0;i<(n1+n2);i++){
        printf(" %d ",sum[i]);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,n1,n2,num,arr[10],xarr[10],sum[20];
    int pos=0,asd[20],apos,xpos;
    printf("\n Enter the number of elements of the first sorted array: ");
    scanf("%d",&n1);
    printf("\n\n Enter the elements of the first array: \n");
    for(i=0;i<n1;i++){
        scanf("%d",&arr[i]);printf("\n");
    }
    printf("\n Enter the number of elements of the second sorted array: ");
    scanf("%d",&n2);
    printf("\n\n Enter the elements of the second array: \n");
    for(i=0;i<n2;i++){
        scanf("%d",&xarr[i]);printf("\n");
    }
    for(i=0,j=0,k=0;k<(n1+n2);k++){
        asd[k]=(arr[i]<xarr[j])?arr[i]:xarr[j];{
        if(asd[k]==arr[i])
            i++;
        else if(asd[k]==xarr[i])
            j++;
        }
    }
    printf("\n");
    for(i=0;i<(n1+n2);i++){
        printf(" %d ",asd[i]);
    }

    return 0;
}

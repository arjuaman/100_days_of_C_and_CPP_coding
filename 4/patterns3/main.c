#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,j,count=0,k;
    for(i=1;i<=5;i++){
            for(j=5;j>=i;j--)
        printf(" ");
    for(k=1;k<=i;k++)
    printf("%d",k);
    //printf("testing %d",k);
    for(int l=k-2;l>0;l--)
        printf("%d",l);
        printf("\n");
    }
}

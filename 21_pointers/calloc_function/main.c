#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,*arr;
    printf("\n Enter the number of elements: ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    if(arr==NULL)
        exit(1);
    printf("\n Enter the %d values to be stored in array:",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\n You have entered: ");
    for(i=0;i<n;i++)
        printf("%d",*(arr+i));
    free(arr);
    return 0;
}

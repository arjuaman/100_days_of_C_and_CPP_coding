#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,arr[20],sum=0;
    int *xarr=arr;
    int *pn=&n;
    int *psum=&sum;
    float mean=0,*pmean=&mean;
    printf("\n Enter the quantity(<20): ");
    scanf("%d",pn);
    for(i=0;i< *pn;i++){
        scanf("%d",(xarr+i));
        *psum = *psum + *(xarr+i) ;
    }
    printf("\n Sum is: %d ",*psum);
    *pmean = (*psum)/n;
    printf("\n Mean is: %f ",*pmean);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,n;
    float *pstart = &m;
    float *end = &n;
    float sum=0,avg;
    float *psum=&sum;float *pavg=&avg;
    printf("\nEnter the starting point: ");
    scanf("%f",pstart);
    printf("\nEnter the ending point: ");
    scanf("%f",end);printf("\n");
    for(int i=(*pstart);i<=(*end);i++){
        *psum=*psum+i;
    }
    printf("%f\n",*psum);
    *pavg = (*psum)/(*end - *pstart);
    printf("%f\n",*pavg);

    return 0;
}

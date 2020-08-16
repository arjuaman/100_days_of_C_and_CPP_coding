#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,n,sum=0,avg;
    float *pstart = &m;
    float *end = &n;
    float *psum=&sum;
    float *pavg=&avg;
    printf("\nEnter the starting point: ");
    scanf("%f",pstart);
    printf("\nEnter the ending point: ");
    scanf("%f",end);printf("\n");
    for(int i=(*pstart);i<=(*end);i++){
        if(i%2==0){
            printf(" %d ",i);
        }
    }

    return 0;
}

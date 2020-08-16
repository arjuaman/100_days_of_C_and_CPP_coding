#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1=3.339,num2=4.56;
    float *pnum1,*pnum2,sum;
    pnum1=&num1;
    pnum2=&num2;
    sum=(*pnum1)+(*pnum2);
    printf("\n%0.2f",sum);

    return 0;
}

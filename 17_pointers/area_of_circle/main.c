#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rad,area;
    float *prad,*parea;
    prad=&rad;
    parea=&area;
    printf("Enter the radius: ");
    scanf("%f",prad);
    *parea=(3.14)*(*prad)*(*prad);
    printf("\n Area is %f",*parea);
    return 0;
}

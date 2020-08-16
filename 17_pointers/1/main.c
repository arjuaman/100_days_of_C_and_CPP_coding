#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *pnum;
    char *pch;
    float *pfnum;
    int x=10;
    pnum=&x;
    printf("\n %d",pnum);
    printf("\n %d",*pnum);

    return 0;
}

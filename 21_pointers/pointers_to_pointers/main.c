#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    int x=10;
    int *px=&x;
    int **ppx=&px;
    printf(" %d \n",*px);
    printf(" %d \n",**ppx);
    return 0;
}

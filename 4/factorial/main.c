#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j,k,fact=1;
    //printf("Hello world!\n");
    printf("enter the number");
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        fact=fact*i;
    }
    printf("factorial is %d",fact);
    return 0;
}

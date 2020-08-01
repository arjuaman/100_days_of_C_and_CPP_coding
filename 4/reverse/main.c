#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//program to print the reverse of a number
int main()
{
    int num,i,j,x,rev=0,count=0,n;
    printf("Enter the number:");
    scanf("%d",&num);
    n=num;
    while(n>0){
     i=n%10;
     rev=10*rev+i;
     n=n/10;
    }
    printf("%d",rev);
    return 0;
}

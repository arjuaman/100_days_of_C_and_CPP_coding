#include <stdio.h>
#include <stdlib.h>
int expon(int a,int b);
int main()
{
    int a,b,res;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the exponent: ");
    scanf("%d",&b);
    res=expon(a,b);
    printf("The exponent of %d to %d is %d",a,b,res);
    return 0;
}
int expon(int a,int b){
    int x;
    if(b==0)
        return 1;
    else
        x=a*expon(a,b-1);
        return x;
}

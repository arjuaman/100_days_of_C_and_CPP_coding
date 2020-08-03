#include <stdio.h>
#include <stdlib.h>
int findgcd(int,int);
int main()
{
    int a,b,gcd;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("\n Enter number 2: ");
    scanf("%d",&b);
    int max,min;
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    gcd=findgcd(max,min);
    printf("GCD of %d and %d is %d",a,b,gcd);
    return 0;
}
int findgcd(int a,int b){
    if(b%a==0){return a;}
    else{
        findgcd(b,a%b);
    }
}

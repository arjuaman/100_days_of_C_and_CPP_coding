#include <stdio.h>
#include <stdlib.h>
int greatest(int *a,int *b,int *c,int *big);
int main(){
    int num1,num2,num3,large;
    printf("\n Enter the first number: ");
    scanf("%d",&num1);
    printf("\n Enter the second number: ");
    scanf("%d",&num2);
    printf("\n Enter the third number: ");
    scanf("%d",&num3);
    greatest(&num1,&num2,&num3,&large);
    printf("\n The greatest is %d ",large);
    return 0;
}
int greatest(int *a,int *b,int *c,int *big){
    *big = (*a > *b)?(((*a)>(*c))?(*a):(*c)):(((*b)>(*c))?(*b):(*c)) ;
}

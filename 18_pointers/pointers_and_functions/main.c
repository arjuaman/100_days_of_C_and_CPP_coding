#include <stdio.h>
#include <stdlib.h>
void sum(int *a,int *b,int *t);
int main()
{
    int num1,num2,total;
    printf("\n Enter the first number: ");
    scanf("%d",&num1);
    printf("\n Enter the second number: ");
    scanf("%d",&num2);
    sum(&num1,&num2,&total);
    printf("\n The sum is %d ",total);
    return 0;
}
void sum(int *a,int *b,int *t){
    *t = *a + *b;
}

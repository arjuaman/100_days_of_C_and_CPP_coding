#include <stdio.h>
#include <stdlib.h>
int add_two_num(int *,int *);
int main()
{
    int num1,num2,sum;
    printf("Enter the 1st number:");
    scanf("%d",&num1);
    printf("Enter the 2nd number:");
    scanf("%d",&num2);
    sum = add_two_num(&num1,&num2);
    printf("%d",sum);
    return 0;
}
int add_two_num(int *num1,int *num2){
    int s;
    s = *num1 + *num2;
    return s;
}

#include <stdio.h>
#include <stdlib.h>
int sum_of_two(int m,int n);
int main()
{
    int a,b,sum;
    printf("Enter 1st number:");
    scanf("%d",&a);
    printf("Enter 2nd number:");
    scanf("%d",&b);
    sum=sum_of_two(a,b);
    printf("%d",sum);
    return 0;
}
int sum_of_two(int m,int n){
    int result;
    result=m+n;
    return result;

}

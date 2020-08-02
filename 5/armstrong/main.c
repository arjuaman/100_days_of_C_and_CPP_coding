#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num,i,j,a,b,c,d,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    b=num;
    printf("\n");
    while(num>0){
        j=num%10;
        a=pow(j,3);
        sum=sum+a;
        num=num/10;
    }
    if(b==sum){
    printf("%d is an armstrong number",sum);
    }
    else
        printf("%d isn't armstrong number",b);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int sum(int a,int b);
int mul(int a,int b);
int subtract(int a,int b);
int division(int a,int b);
int (*fp[4])(int a,int b);
int main()
{
    int result;
    int num1,num2,op;
    fp[0]=sum;
    fp[1]=subtract;
    fp[2]=mul;
    fp[3]=division;
    printf("\n Enter the numbers: ");
    scanf("%d %d",&num1,&num2);
    do{
        printf("\n 0:Add \n 1:Subtract \n 2:Multiply \n 3:Divide \n 4.EXIT\n");
        printf("Enter the operation: ");
        scanf("%d",&op);
        result=(fp[op])(num1,num2);
        printf("\n Result=%d",result);

    }while(op!=4);
    return 0;
}
int sum(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int division(int a,int b){
    if(b)
        return a/b;
    else
        return 0;
}

#include <stdio.h>
#include <stdlib.h>
int add(int,int);
int sub(int,int);
int operate(int(*operate_fp)(int,int),int,int);

int main()
{
    int answer;
    answer=operate(add,9,7);
    printf("\n Addition = %d ",answer);
    answer=operate(sub,9,7);
    printf("\n Subtraction = %d ",answer);
    return 0;
}
int add(int a,int b){
    return(a+b);
}
int sub(int a,int b){
    return(a-b);
}
int operate(int(*operate_fp)(int,int),int a,int b){
    int result;
    result=(*operate_fp)(a,b);
    return result;
}

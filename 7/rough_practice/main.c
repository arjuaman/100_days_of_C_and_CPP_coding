#include <stdio.h>
#include <stdlib.h>
void func(char);
int a;
static int f1(){return a++;}
//auto int a;
//AUTO WILL GIVE ERROR BECAUSE ITS ONLLY FOR LOCAL SCOPE, NOT GLOBAL
int main()
{
    a=10;
    //int a=10;//,b=3;
    printf("%d ",f1());
    a=a*10;
    printf("%d",f1());
    //printf("%d",func());
    //printf("%d",func());
    return 0;
}
void func(char a){

printf("%d",a);
    //return func(--a)+10;
//else
 //   return 0;
//return c;
}

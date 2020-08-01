#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,dn,temp,j,octal=0,i=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    dn=num;
    while(num!=0){
        temp=num%8;
        octal=octal+temp*i;
        i=i*10;
        num=num/8;
    }
    printf("%d",octal);
    return 0;
}

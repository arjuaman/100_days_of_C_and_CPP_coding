#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,a,b,max,min;//char arr[20];
    printf("Enter the 1st and 2nd number:");
    scanf("%d %d",&a,&b);
    min=(a<b)?a:b;
    max=(a>b)?a:b;
    while(min!=0){
        temp=max%min;
        max=min;
        min=temp;
    }
    printf("%d",max);
    return 0;
}

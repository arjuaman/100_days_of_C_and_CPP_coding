#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,greatest;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is greatest",a);
    }
    if(b>a && b>c){
        printf("%d is greatest",b);
    }
    if(c>a && c>b){
        printf("%d is greatest",c);
    }
    return 0;
}

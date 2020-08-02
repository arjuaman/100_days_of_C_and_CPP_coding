#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,a,sum=0;
    printf("enter the value of n: \n");
    scanf("%f",&n);
    for(float i=1.0;i<=n;i++){
        a=i/(i+1.0);
        sum=sum+a;
    }
    printf("%f",sum);
    return 0;
}

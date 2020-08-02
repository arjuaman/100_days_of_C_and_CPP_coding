#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;float sum=0;
    printf("Enter upto where \n");
    scanf("%f",&n);
    for(float i=1.0;i<=n;i++){
        sum=sum+(1/i);
    }
    printf("%f",sum);
    return 0;
}

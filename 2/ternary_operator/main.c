#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,greatest;
    printf("Enter the three numbers you want to compare:");
    scanf("%f %f %f",&a,&b,&c);
    greatest=(a>b)?((a>c)?a:c):((b>c)?b:c) ;
    printf("The greatest number is %0.3f",greatest);

    return 0;
}

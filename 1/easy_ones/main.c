#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 float a,b,c,area,s;
 printf("Enter the dimensions of the triangle:");
 scanf("%f %f %f",&a,&b,&c);
 s=(a+b+c)/2;
 area=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("Area is %0.5f",area);

 return 0;
}

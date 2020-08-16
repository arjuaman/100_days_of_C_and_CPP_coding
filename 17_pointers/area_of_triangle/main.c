#include <stdio.h>
#include <stdlib.h>
// using height and base formula
float triangle_area(float *b,float *h,float *a);
int main()
{
    float base,height,area;
    printf("\n Enter the base length of the right-triangle: ");
    scanf("%f",&base);
    printf("\n Enter the height length of the right-triangle: ");
    scanf("%f",&height);
    triangle_area(&base,&height,&area);
    printf("\n The area of the triangle is: %f ",area);
    return 0;
}
float triangle_area(float *b,float *h,float *a){
    *a = (0.5) * (*b) * (*h);
}

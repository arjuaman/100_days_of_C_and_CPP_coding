#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x1,x2,y1,y2;
    printf("Enter the coordinates of 1st point:");
    scanf("%f %f",&x1,&y1);
    printf("Enter the coordinates of 2nd point:");
    scanf("%f %f",&x2,&y2);
    float dist;
    dist=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("The calculated distance is: %f",dist);
    return 0;
}

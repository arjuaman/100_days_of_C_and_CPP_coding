#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int *pnum=&num;
    printf("\nEnter the number: ");
    scanf("%d",pnum);
    //printf("%d",*pnum);
    if(*pnum>0)
        printf("\n %d is positive.",*pnum);
    if(*pnum<0)
        printf("\n %d is negative.",*pnum);
    if(*pnum==0)
        printf("\n %d is zero.",*pnum);
    return 0;
}

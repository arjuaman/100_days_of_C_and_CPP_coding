#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,num,i=0;
    int large=(-1100000);
    printf("Enter the total numbers you want to compare:\t");
    scanf("%d",&n);
    while(i<n){
        printf("Enter the %d th number \t",i+1);
        scanf("%d",&num);
        large=(large>num)?large:num;
        i++;
        }
        printf("Largest number is: %d",large);
}

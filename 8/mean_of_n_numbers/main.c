#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,arr[50];
    float avg=0,sum=0;
    printf("\n Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number at %d position ",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("%f",avg);

    return 0;
}

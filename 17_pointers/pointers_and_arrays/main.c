#include <stdio.h>
#include <stdlib.h>
// arr[i] = *(arr+i)
int main()
{
    int arr[]={1,2,3,4,5};
    printf("\n Address of array = %p %p %p",arr,&arr[0],&arr);
    int *ptr=&arr[0];
    ptr++;
    printf("\nThe value of the second element of the array is %d",*ptr);
    return 0;
}

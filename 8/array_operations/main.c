#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//program to read and print n random numbers
int main()
{
    int i,arr[10],n,RandNo;
    printf("Enter the length of the array(less than equal 10):");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            RandNo=rand();
            arr[i]=RandNo;
    }
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}

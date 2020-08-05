#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
    //METHODS OF INITIALIZATION

    int marks[5]; //Way 1
    int a[5]={1,2,3,4,5};
    int b[]={1,2,3,4,5};
    int c[5]={5,6};
    int d[5]={0};
    int arr[N];
    //int arr[A]; invalid

    //INPUTTING VALUES
    for(int i=0;i<N;i++){
        printf("Enter the value in the array:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++)
        printf("%d\n",arr[i]);

    //ASSIGNING VALUES
    marks[3]=100;
    printf("%d %d %d %d %d \n\n\n",marks[0],marks[1],marks[2],marks[3],marks[4]);

    int j,arr1[10];
    for(j=0;j<10;j++){
        arr1[j]=j*2;
    }
    for(j=0;j<10;j++){
        printf("%d \t",arr1[j]);
    }

    return 0;
}

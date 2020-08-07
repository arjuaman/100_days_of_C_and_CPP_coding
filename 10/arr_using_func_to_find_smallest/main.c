#include <stdio.h>
#include <stdlib.h>
void read(int arr[],int);
void smallest(int arr[],int);
int main()
{
    int num[10],n,i,j;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    read(num,n);
    smallest(num,n);
    return 0;
}
void read(int arr[10],int n){
    for(int k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    printf("\n The array is: ");
    for(int k=0;k<n;k++){
        printf(" %d ",arr[k]);
    }
}
void smallest(int arr[10],int n){
int    small=99999999;
    for(int i=0;i<n;i++){
        if(arr[i]<small)
            small=arr[i];
        }
    printf("\n %d is smallest ",small);
}

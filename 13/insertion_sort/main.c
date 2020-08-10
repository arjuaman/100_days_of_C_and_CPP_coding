#include <stdio.h>
#include <stdlib.h>
void insertion_sort(int arr[],int n);
int main()
{
    int n,i,temp,j,k,arr[20]={0};
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);
    printf("\n");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}
void insertion_sort(int arr[],int n){
    int j,k,temp;
    for(int i=0;i<n;i++){  //27 72 36 63 45 54
        temp=arr[i]; //temp=27=arr[0] arr[1]=72 arr[2]=36
            j=i-1;  //j=-1 0 1
        while((temp<arr[j])&&(j>=0)){ //temp=72>27 36<72
              arr[j+1]=arr[j]; //arr[2]=arr[1]=72
              j--; //j=0
              }
        arr[j+1]=temp; //arr[j+1]=arr[0]=27 arr[1]=72 arr[1]=36
    }
}

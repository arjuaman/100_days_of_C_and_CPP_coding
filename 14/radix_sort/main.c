#include <stdio.h>
#include <stdlib.h>
void radix(int arr[],int);
int largest(int arr[],int);
int main()
{
    int n,i,temp,j,k,arr[10];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("\nEnter the elements of the array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    radix(arr,n);
    printf("\n");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}
int largest(int arr[],int n){
    int large=arr[0],i;
    for(i=1;i<n;i++){
        if(arr[i]>large)
            large=arr[i];
    }
    return large;
}
void radix(int arr[],int n){
    int bucket[10][10],bucket_count[10];
    int large,i,j,k,remainder,pos=1,pass,nop=0; //nop=number of passes
    large=largest(arr,n);
    for(j=large;j>0;j/10){
            nop++;
    }
    for(pass=0;pass<nop;pass++){
            for(i=0;i<10;i++)
                bucket_count[i]=0;
            for(i=0;i<n;i++){
            remainder=(arr[i]/pos)%10;
            bucket[remainder][bucket_count[remainder]]=arr[i];
            bucket_count[remainder] += 1;
            }
            i=0;
            for(k=0;k<10;k++){
                for(j=0;j<bucket_count[k];j++){
                    arr[i]=bucket[k][j];
                    i++;
                }
            }
            pos *= 10;
    }

}

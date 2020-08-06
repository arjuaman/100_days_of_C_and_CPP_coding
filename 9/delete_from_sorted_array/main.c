#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,pos,num,n,arr[10];
    printf("Enter the length of array: ");
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    printf("\n\n");
    for(int k=0;k<n;k++){
        printf(" %d ",arr[k]);
    }
    //printf("\n Enter the position at where to enter new element: ");
    //scanf("%d",&pos);
    printf("\n Enter the element to be deleted: ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(num==arr[i]){
            pos=i;
        }
    }
    printf("\n\n");
for(i=pos;i<n;i++){
        arr[i]=arr[i+1];
}
    printf("\n\n");
    for(int j=0;j<n-1;j++){
            printf(" %d ",arr[j]);
    }


    return 0;
}

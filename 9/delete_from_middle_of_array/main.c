#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,pos,num,n,arr[10];
    printf("Enter the length of array(less than 10): ");
    scanf("%d",&n);
    for(int k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    printf("\n\n");
    for(int k=0;k<n;k++){
        printf(" %d ",arr[k]);
    }
    printf("\n Enter the position from where to delete the element: ");
    scanf("%d",&pos);
    for(i=pos;i<n;i++){
        arr[i]=arr[i+1];
}
    printf("\n\n");
    for(int j=0;j<n-1;j++){
            printf(" %d ",arr[j]);
    }
    return 0;
}

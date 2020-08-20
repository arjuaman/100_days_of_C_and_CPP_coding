#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr,i,j,rows,cols;
    printf("\nEnter the number of rows and columns: ");
    scanf("%d %d",&rows,&cols);
    arr=(int*)malloc(rows*cols*sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed");
        exit(-1);
    }
    printf("\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&(arr[i+j*cols]));
        }
    }
    printf("\n");
    for(i=0;i<rows;i++){
        printf("\n");
        for(j=0;j<cols;j++){
            printf(" %d ",(arr[i+j*cols]));
        }
    }
    for(i=0;i<rows;i++)
        free(arr[i]);
    free(arr);
    return 0;
}

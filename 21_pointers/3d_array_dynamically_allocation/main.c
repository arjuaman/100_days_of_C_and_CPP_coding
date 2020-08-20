#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,***arr;
    arr=(int***)malloc(3*sizeof(int**));
    if(arr==NULL){
        printf("\nMemory allocation failed.");
        exit(1);
    }
    for(i=0;i<3;i++){
        arr[i]=(int**)malloc(3*sizeof(int*));
        if(arr[i]==NULL){
            printf("\nMemory allocation failed.");
            exit(1);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr[i][j]=(int*)malloc(3*sizeof(int));
            if(arr[i][j]==NULL){
                printf("\nMemory allocation failed.");
                exit(1);
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf(" %d ",arr[i][j][k]);
            }
        }
    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
        free(arr[i][j]);
    }
    free(arr);
    return 0;
}

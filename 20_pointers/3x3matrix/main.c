#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3],(*parr)[3];
    parr=arr;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                scanf("%d",(*parr+i)+j);
        }
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
                printf(" %d ",(*(*parr+i)+j));
        }
    }
    return 0;
}

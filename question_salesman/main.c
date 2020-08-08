#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,isum=0,ssum=0,col,arr[5][3]={0};
    for(row=0;row<5;row++){
            printf("For Salesman %d: ",row+1);
        for(col=0;col<3;col++){
            printf("\n Enter sale of product %d: ",col+1);
            scanf("%d",&arr[row][col]);
        }
    }
    printf("\n");
    for(row=0;row<5;row++){
        for(col=0;col<3;col++){
            //printf(" %d",arr[row][col]);
            ssum=ssum+arr[row][col];
            }
        printf("Total sales by salesman %d is: %d ",row+1,ssum);
        ssum=0;
        printf("\n");
    }
    for(col=0;col<3;col++){
            for(row=0;row<5;row++){
                    isum=isum+arr[row][col];
    }
    printf("Total sales of item %d is: %d ",col+1,isum);
    isum=0;
    printf("\n");
    }
    return 0;
}

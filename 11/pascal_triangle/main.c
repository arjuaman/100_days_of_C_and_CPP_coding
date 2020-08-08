#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,arr[10][10]={0};
    arr[0][0]=arr[1][0]=arr[1][1]=1;
    for(row=2;row<7;row++){
        for(col=0;col<7;col++){
            if(col==0 || col==row){
                arr[row][col]=1;
            }
            //arr[0][0]=arr[1][0]=arr[1][1]=1;
            else
                arr[row][col]=arr[row-1][col-1]+arr[row-1][col];
        }
    }

    for(row=0;row<7;row++){
        for(col=0;col<7;col++){
            printf("\t%d\t",arr[row][col]);
        }
        printf("\n");
    }

    return 0;
}

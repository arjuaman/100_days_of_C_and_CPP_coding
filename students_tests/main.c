#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,total=0,col,arr[10][3]={0};
    float avrg[10],marks=0,avg=0;
    for(row=0;row<10;row++){
            printf("\n For Student %d: ",row+1);
        for(col=0;col<3;col++){
            printf("\n Enter marks in subject %d: ",col+1);
            scanf("%d",&arr[row][col]);
        }
    }
    printf("\n");
    for(row=0;row<10;row++){
            printf("\n For Student %d: ",row+1);
        for(col=0;col<3;col++){
            //printf("%d",arr[row][col]);
            marks=marks+arr[row][col];
        }
        avg=marks/3;
        avrg[row]=avg;
        printf("\n Total marks of student %d is: %f and average is: %f ",row+1,marks,avg);
        marks=0;
    }


    return 0;
}

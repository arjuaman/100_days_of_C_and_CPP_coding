#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,i,j,k,col,mat[3][3]={0};
    printf("Enter the number of rows and columns of square matrix: ");
    scanf("%d",&row);
    col=row;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i==j){
                mat[i][j]=0;
            }
            else if(i>j){
                mat[i][j]=-1;
            }
            else if(i<j){
                mat[i][j]=1;
            }
        }
    }
    printf("\n");
    for(i=0;i<row;i++){
        printf("\n");
        for(j=0;j<col;j++){
            printf("\t%d\t",mat[i][j]);
        }
    }
    return 0;
}

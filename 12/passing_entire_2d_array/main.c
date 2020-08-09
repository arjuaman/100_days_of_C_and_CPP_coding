#include <stdio.h>
#include <stdlib.h>
void read_matrix(int mat[3][3],int,int);
void sum_matrix(int mat1[3][3],int mat2[3][3],int,int);
void mul_matrix(int mat1[3][3],int mat2[3][3],int,int);
void transpose_matrix(int mat[3][3],int,int);
void display_matrix(int mat[3][3],int,int);
int main()
{
    int option,row,col,i,j,mat1[3][3],mat2[3][3],res[3][3];
    do{
    printf("\n-----MENU-----");
    printf("\n1. Read matrix ");
    //printf("\n2. Display matrix ");
    printf("\n2. Sum of matrices ");
    printf("\n3. Multiply matrices ");
    printf("\n4. Transpose a matrix ");
    printf("\n5. EXIT");
    printf("\nEnter your choice: ");
    scanf("%d",&option);
    switch(option){
case 1:
    printf("\n Enter number of rows and columns of the matrix");
    scanf("%d %d",&row,&col);
    printf("\n Enter the first matrix: ");
    read_matrix(mat1,row,col);
    printf("\n Enter the second matrix: ");
    read_matrix(mat2,row,col);
    break;
case 2:
    printf("\n");
    sum_matrix(mat1,mat2,row,col);
    break;
case 3:
    printf("\n");
    mul_matrix(mat1,mat2,row,col);
    break;
case 4:
    printf("\n");
    transpose_matrix(mat1,row,col);
    break;
default:
    break;
}}while(option!=5);
return 0;
}
void read_matrix(int mat[3][3],int row,int col){
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&mat[i][j]);
    }}
}

void display_matrix(int mat[3][3],int row,int col){
    printf("\n");
    for(int i=0;i<row;i++){
            printf("\n");
    for(int j=0;j<col;j++){
        printf("\t%d\t",mat[i][j]);
    }
    }
}

void sum_matrix(int mat1[3][3],int mat2[3][3],int row,int col){
    int res[3][3];
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
            res[i][j]=mat1[i][j]+mat2[i][j];
    }
    }
    display_matrix(res,row,col);
}

void mul_matrix(int mat1[3][3],int mat2[3][3],int row,int col){
    int i,j,k,prod[3][3];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            prod[i][j]=0;
            for(k=0;k<col;k++)
                prod[i][j] = prod[i][j] + mat1[i][k] * mat2[k][j];
        }
    }
    display_matrix(prod,row,col);
}

void transpose_matrix(int mat[3][3],int row,int col){
    int trans[3][3];
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++){
        trans[i][j]=mat[j][i];
    }
    display_matrix(trans,row,col);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    int mat1[5][5],mat2[5][5],res[5][5]={0},m,n,p,q;
    printf("Enter the number of rows in first matrix: ");
    scanf("%d",&m);
    printf("\nEnter the number of columns in first matrix: ");
    scanf("%d",&n);
    printf("\nEnter the number of rows in second matrix: ");
    scanf("%d",&p);
    printf("\nEnter the number of columns in second matrix: ");
    scanf("%d",&q);
    if(n!=p){
        printf("\nNumber of cols of 1st should be equal to no. of rows of 2nd. Please retry.");
        exit(0);
    }
    printf("\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<m;i++){
        j=0;
        for(j=0;j<q;j++){
                res[i][j]=0;
                for(k=0;k<q;k++){
            res[i][j] = res[i][j] + mat1[i][k] * mat2[k][j];
        }
    }
}
    printf("\n");
    for(int i=0;i<m;i++){
            printf("\n");
        for(int j=0;j<q;j++){
            printf(" %d ",res[i][j]);
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,i,j,k,one;
    scanf("%d", &n);
    one=1;
  	// Complete the code to print the pattern.
  	for(i=1;i<=(2*n-1);i++){
        for(j=1;j<=(2*n-1);j++){

            if(i==1 || j==1 || i==(2*n-1) || j==(2*n-1)){
                printf(" %d",n);
            }
            else if(i==2 || j==2 || i==(2*n-2) || j==(2*n-2)){
                printf(" %d",n-1);
            }
            else if(i==3 || j==3 || i==(2*n-3) || j==(2*n-3)){
                printf(" %d",n-2);
            }
            else if(i==4 || j==4 || i==(2*n-4) || j==(2*n-4)){
                printf(" %d",n-3);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
  	}
    return 0;
}

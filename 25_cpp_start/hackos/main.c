#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,i,j,k,one;
    scanf("%d", &k);
    one=1;
  	// Complete the code to print the pattern.
  	for(i=1;i<=(2*k-1);i++){
        for(j=1;j<=(2*k-1);j++){
            for(n=1;n<=k;n++){
                if(i==(n) || j==(n) || i==(2*k-n) || j==(2*k-n)){
                    printf(" %d",k-n+1);
                    break;
                }
                else{
                    continue;
                }

            }

            //else{printf("  ");}
        }
        printf("\n");
  	}
    return 0;
}

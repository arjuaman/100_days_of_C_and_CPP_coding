#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=5;
    for(int i=1;i<=5;i++){
        //printf("%d",i);
        //for(int j=1;j<=count;j++)
          //  printf(" ");
        for(int k=1;k<=i;k++)
            printf("%2d",i);
        printf("\n");
        //count--;
    }
    return 0;
}

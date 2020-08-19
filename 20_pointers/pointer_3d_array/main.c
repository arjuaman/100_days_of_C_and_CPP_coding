#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][2][2]={1,2,3,4,5,6,7,8};
    int i,(*parr)[2][2];
    parr=arr;
    for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
        printf("%d",(*(parr+i))[j][k]);
    }}}
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][2]={{1,2},{3,4}};
    int i,(*parr)[2];
    parr=arr;
    for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d",(*(parr+i))[j]);
        //printf("%d",(*(*parr+i)+j));
    }}
    return 0;
}

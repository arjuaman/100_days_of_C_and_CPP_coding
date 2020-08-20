#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ip=malloc(100*sizeof(int));
    if(ip==NULL){
    printf("\n Memory can't be allocated");
    return;}
    else
        printf("\nSuccessful");
    return 0;
}

// arr=(int*)malloc(10*sizeof(int))
// arr=(int*)malloc(10*sizeof(int))

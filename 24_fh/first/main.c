#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    ptr=fopen("sample.txt","w+");
    if(ptr==NULL){
        printf("\nCan't perform the operation. ");
        exit(0);
    }
    for(int i=65;i<91;i++){
        fprintf(ptr,"%c\n",i);
    }
    fclose(ptr);
    return 0;
}

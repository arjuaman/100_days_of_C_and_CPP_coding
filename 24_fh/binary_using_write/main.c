#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *ptr;
    int i;
    ptr=fopen("lines.dat","wb");
    if(ptr==NULL){
        printf("\nFailed to read from file. Write the correct name of file. ");
        exit(0);
    }
    for(i=10001;i<=11000;i++){
        fwrite(&i,sizeof(int),1,ptr);
    }
    fclose(ptr);
}

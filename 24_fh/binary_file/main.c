#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *ptr;
    int i;
    ptr=fopen("lines.dat","wb");
    //char arr[50],ch;
    //printf("Enter the file name with extension: ");
    //gets(arr);
    if(ptr==NULL){
        printf("\nFailed to read from file. Write the correct name of file. ");
        exit(0);
    }
    //fscanf(ptr,"%c",&ch);
    //while(!feof(ptr)){
    //   printf("%c",ch);
    //    fscanf(ptr,"%c",&ch);
    //}
    for(i=0;i<=100;i++){
        fprintf(ptr,"\n");
    }
    fclose(ptr);

    FILE *fp;
    char chs;
    int count=0;
    fp=fopen("lines.dat","rb");
    chs=getc(fp);
    do{
        count++;
        chs=getc(fp);
    }while(!feof(fp));
    fclose(fp);
    printf("\n%d",count);
}

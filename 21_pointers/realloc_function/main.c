#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *str;//int *ptr;
    str=(char*)malloc(10);
    //ptr=(int*)malloc(10);
    //printf("%d",sizeof(ptr));
    if(str==NULL){
        exit(1);
    }
    strcpy(str,"Hi");
    printf("\n STR = %s",str);
    str=(char*)realloc(str,20);
    if(str==NULL){
        exit(1);
    }
    printf("\n STR = %s",str);
    strcpy(str,"Hi there");
    printf("\n STR = %s",str);
    free(str);
    return 0;
}

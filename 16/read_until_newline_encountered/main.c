#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[30];
    int i,j,k=0,temp;
    printf("\nEnter the line: ");
    scanf("%c",&str[k]);
    while(str[k]!='\n'){
    k++;
    scanf("%c",&str[k]);
    }
    str[k]='\0';
    //for()
    puts(str);
    return 0;
}

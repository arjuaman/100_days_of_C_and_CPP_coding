#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char str[]="hello";
    char *str = "world of programming";
    char *pstr;
    pstr=str;
    printf("\n the string is: ");
    while(*pstr != '\0'){
        printf("%c",*pstr);
        pstr++;
    }
    return 0;
}

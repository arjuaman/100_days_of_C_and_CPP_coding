#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50],*pstr;
    char copy_str[50],*pcopy;
    printf("Enter the string: \n");
    gets(str);
    pstr=str;
    pcopy=copy_str;
    //puts(pstr);
    while(*pstr != '\0'){
           *pcopy= *pstr;
           pstr++;
           pcopy++;
    }
    *pcopy = '\0';
    #Now we need to bring the pointer back to zero
    pcopy=copy_str;
    while(*pcopy != '\0'){
           printf("%c",*pcopy);
           pcopy++;
    }
    return 0;
}

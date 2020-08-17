#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50],*pstr;
    int newline=0,words=0,ch=0;
    int *pnewline = &newline;
    int *pwords = &words;
    int *pch=&ch;
    printf("Enter the string: \n");
    gets(str);
    pstr=str;
    puts(pstr);
    while(*pstr != '\0'){
            if(*pstr == '\n'){
                (*pnewline)++;
            }
            if(*pstr == ' '){
                (*pwords)++;
            }
            pstr++;
            (*pch)++;
    }
    if(*pch > 0 && *pnewline==0){
            (*pnewline)++;
    }
    if(*pch > 0){
            (*pwords)++;
    }
    printf("\n Input string has %d characters, %d words and %d lines.",*pch,*pwords,*pnewline);

    return 0;
}

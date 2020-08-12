#include <stdio.h>
#include <stdlib.h>

int main()
{
    fputs("Geeksfor", stdout);
    fputs("Geeks", stdout);
    char str1[]="hello";char ch,str[10];
    char str2[]={'h','e','l','l','o','\0'};
    int i=0;
    ch=getchar();
    while(ch!='*'){
    str[i]=ch;
    i++;
    ch=getchar();
    }
    str[i]='\0';
    return 0;
}

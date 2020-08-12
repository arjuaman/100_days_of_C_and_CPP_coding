#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//there is a library function strrev(s1,s2) that reverses s1,except the null character, in #include <string.h>
int main()
{
    char str[50],rev[50];
    int i=0,j=0,k,temp,len1,len2;
    printf("ENTER THE STRING: ");
    gets(str);
    len1=strlen(str);
    j=len1-1;
    while(str[i]!='\0'){
        rev[j]=str[i];
        i++;
        j--;
    }
    rev[i]='\0';
    puts(str);
    puts(rev);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[50],str2[50],res[100];
    int i=0,j=0,k,temp;
    printf("ENTER STRING 1: ");
    gets(str1);
    printf("ENTER STRING 2: ");
    gets(str2);
    while(str1[i]!='\0'){
        res[j]=str1[i];
        i++;j++;
    }
    i=0;
    while(str2[i]!='\0'){
        res[j]=str2[i];
        i++;j++;
    }
    res[j]='\0';
    puts(res);
    return 0;
}

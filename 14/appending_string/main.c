#include <stdio.h>
#include <stdlib.h>
//there is a lib function strcat(s1,s2) that concatenates s2 to s1 in #include <string.h>
int main()
{
char str1[50],str2[50],res[100];
    int i=0,j=0,k,temp;
    printf("ENTER MAIN STRING: ");
    gets(str1);
    printf("ENTER STRING TO APPEND: ");
    gets(str2);
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;j++;
    }
    str1[i]='\0';
    puts(str1);
    return 0;
}

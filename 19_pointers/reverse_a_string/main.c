#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[20],rev[20],*pstr,*prev;
    int i=0,j,k,len=0;
    pstr=str;
    prev=rev;
    printf("Enter the string: \n");
    gets(pstr);
    //prev = len(str)-1;
    while(*pstr != '\0'){
        len++;
        pstr++;
    }
    printf("\n %d \n",len);
//    puts(*pstr(len-1));
    pstr--;
    while(pstr>=str){
        *prev = *pstr;
        prev++;
        pstr--;
    }
    *prev='\0';
    printf("\n The reversed string is: ");
    puts(rev);
    return 0;
}

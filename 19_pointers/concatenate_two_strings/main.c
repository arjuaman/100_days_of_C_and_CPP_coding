#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[20],str2[20],res[40],*pres,*pstr1,*pstr2;
    int i,j,k,len;
    pstr1=str1;
    pstr2=str2;
    pres=res;
    printf("\nEnter first string: ");
    gets(pstr1);
    printf("\nEnter second string: ");
    gets(pstr2);
    while(*pstr1 != '\0'){
        *pres = *pstr1;
        pres++;
        pstr1++;
    }
    //*pres='  ';
    while(*pstr2 !='\0'){
        *pres = *pstr2;
        pres++;
        pstr2++;
    }
    *pres ='\0';
    puts(res);

    return 0;
}

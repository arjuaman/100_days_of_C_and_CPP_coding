#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50],cpy[50],*pstr,*pcpy;
    int n,m,i=0,j,len=0;
    int *pn=&n; int *pm=&m; int *plen=&len;
    pstr=str;
    pcpy=cpy;
    printf("\nEnter the array: ");
    gets(pstr);
    printf("\nEnter position from where to copy: ");
    scanf("%d",pm);
    printf("\nEnter number of characters to be copied: ");
    scanf("%d",pn);
    pstr=pstr+(*pm);
    while(*pstr != '\0' && i< *pn){
        *pcpy = *pstr;
        pcpy++; pstr++; i++;
    }
    *pcpy='\0';
    printf("\n The copied text is: ");
    puts(cpy);

    return 0;
}

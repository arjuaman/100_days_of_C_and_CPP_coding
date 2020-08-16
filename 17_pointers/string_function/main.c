#include <stdio.h>
#include <stdlib.h>

int main()
{
    int countup=0,countlow=0,i=0,j=0,k,temp;
    printf("Read characters until '*' is encountered.\n");
    char ch;
    char *pch=&ch;
    scanf("%c",pch);
    while(*pch != '*'){
        if(*pch>'A' && *pch<'Z'){
            *pch += 32;
            countup++;
        }
        if(*pch>'a' && *pch<'z'){
            *pch -= 32;
            countlow++;
        }
        printf("%c\n",*pch);
        scanf("%c",pch);

    }
    printf("\n The number of uppercase characters are: %d ",countup);
    printf("\n The number of lowercase characters are: %d ",countlow);
    return 0;
}

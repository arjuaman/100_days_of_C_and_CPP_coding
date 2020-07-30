#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter the character you wanna convert\n");
    scanf("%c",&ch);
    printf("The lowercase equivalent is %c",ch+32);
    return 0;
}

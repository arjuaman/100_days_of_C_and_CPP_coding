#include <stdio.h>
#include <stdlib.h>
// in #include <string.h> there is a lib function that strlen(string_name) that returns length of string_name
int main()
{
    char str[30];
    int i=0;
    printf("Enter the string: ");
    gets(str);
    puts(str);
    while(str[i]!='\0'){
        i++;
    }
    printf("\nThe length of the string is: %d ",i);
    return 0;
}

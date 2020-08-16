#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *ptr;
    // Used to point to data of different types at different times
    int x=10;
    char ch='A';
    void *gp;
    gp=&x;
    printf("\n Generic pointer points to the integer value = %d",*(int*)gp);
    gp=&ch;
    printf("\n Generic pointer now points to the character %c ",*(char*)gp);

    return 0;
}

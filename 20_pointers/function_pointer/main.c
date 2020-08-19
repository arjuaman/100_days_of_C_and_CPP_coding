#include <stdio.h>
#include <stdlib.h>
void print(int);
void (*fp)(int);
int main()
{
    fp=print;
    (*fp)(10);
    fp(20);
    return 0;
}
void print(int n){
    printf("  %d  ",n);
}

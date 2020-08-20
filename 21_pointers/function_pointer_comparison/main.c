#include <stdio.h>
#include <stdlib.h>
void print(int);
void (*fp)(int);
int main()
{
    fp=print;
    if(fp>0){         //checks if initialized
        if(fp==print)
            printf("\nPointer points to print");
        else
            printf("\nPointer not initialized");
    }
    (*fp)(10);
    fp(20);
    return 0;
}
void print(int n){
    printf("  %d  ",n);
}

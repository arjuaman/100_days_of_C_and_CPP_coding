#include <stdio.h>
#include <stdlib.h>
void print(void);
int main()
{
    printf("\n First call of print: ");
    print();
    printf("\n Second call of print: ");
    print();
    printf("\n Third call of print: ");
    print();
    return 0;
}
void print(void){
    static int x;
    int y=0;
    printf("\n Value of static integer variable x: %d",x);
    printf("\n Value of y: %d",y); x++;y++;
}

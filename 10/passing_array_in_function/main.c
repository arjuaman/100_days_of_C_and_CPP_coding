#include <stdio.h>
#include <stdlib.h>
void func(int *);
int main()
{
    int arr[5]={1,2,3,4,5};
    func(&arr[3]);
    return 0;
}
void func(int *num){
    printf("%d",*num);
}

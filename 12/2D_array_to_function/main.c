#include <stdio.h>
#include <stdlib.h>
void func(int arr[]);
int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    func(arr[1]);

    return 0;
}
void func(int arr[]){
    int i;
    for(i=0;i<3;i++)
        printf(" %d ",arr[i]*10);
}

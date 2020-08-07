#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={1,2,3,4,5};
    func(arr);
    return 0;
}
void func(int arr[5]){
    int i;
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}

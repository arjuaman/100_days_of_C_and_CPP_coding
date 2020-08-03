#include <stdio.h>
#include <stdlib.h>
int fibo(int n);
int main()
{
    int n,res;
    printf("Fibonacci Series \n");
    printf("Enter the length: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        res=fibo(i);
        printf("%d ",res);
    }
    return 0;
}
int fibo(int n){
    if(n==1 || n==2)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}

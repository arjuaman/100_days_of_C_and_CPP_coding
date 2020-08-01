#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    int num,prime=0,comp=0;

    printf("Enter the number");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i == 0){
                prime++;
        }
        else{
            comp++;
        }
    }
    if(prime==0){
        printf("The number %d is a prime number.",num);
    }
    else{
        printf("The number %d is a composite number.",num);
    }
    return 0;
}

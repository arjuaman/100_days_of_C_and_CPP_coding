#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,prime=0,comp=0,pflag=0;
    printf("Enter -1 to stop \n");
    printf("Enter the number \t");
    scanf("%d",&n);
    if(n>0 || n==-1){
            num=n;
    do{
    for(int i=2;i<num;i++){
        if(num%i ==0){
            pflag=1;
            break;
        }
    }
    if(pflag==0){ prime++; }
    else{comp++;}
    pflag=0;
    printf("\n Enter the number \t");
    scanf("%d",&num);
    }while(num != -1);
    printf("\n Number of prime numbers entered is: %d \n",prime);
    printf("Number of composite numbers entered is: %d \n",comp);
    }
    else{
        printf("Please enter a valid number next time");
    }
    return 0;
}

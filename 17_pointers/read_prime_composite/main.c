#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag=0,n,*pn=&n;
    printf("Enter the numbers, -1 to exit: ");
    scanf("%d",pn);
    while(*pn != -1){
        for(int i=2;i<*pn;i++){
            if((*pn)%i==0){
                flag=1;break;
            }
        }
        if(flag==0)
            printf("\n %d is prime number\n",*pn);
        if(flag==1)
            printf("\n %d is composite number\n",*pn);
        flag=0;
        scanf("%d",pn);
    }
    return 0;
}

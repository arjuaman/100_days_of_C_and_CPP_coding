#include <stdio.h>
#include <stdlib.h>
int find_fact_of(int);
int main()
{
    int num,i,n=1,fact;
    printf("Enter the number to find factorial of: ");
    scanf("%d",&num);
    fact=find_fact_of(num);
    printf("\n The required factorial is: %d",fact);
    return 0;
}
int find_fact_of(int num){
    if (num==1){return 1;}
    else{
         num = num * find_fact_of(num-1);
     //   int p;
    //p = *num - 1;
        //return &((*num)*find_fact_of(num -1));
    }
}

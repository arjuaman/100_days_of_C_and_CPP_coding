#include <stdio.h>
#include <stdlib.h>
unsigned int i;
int main()
{
    printf("Enter -1 to stop else any value to continue\n");scanf("%d",&i);
    while(i != -1){   //here -1 is called a sentinel value
    float sal,bonus;
    int sex;
    char name[20];
    printf("Enter first name of employee:\n");scanf("%s",&name);
    printf("Enter the salary of the employee: \n"); scanf("%f",&sal);
    printf("Enter the sex of the employee, 1 for Male, 2 for female:\n"); scanf("%d",&sex);
    if(sal<10000){
        switch(sex){
        case 1: bonus=sal*(0.07);break;
        case 2: bonus=sal*(0.12);break;
        }
    }
    if(sal>10000){
        switch(sex){
        case 1: bonus=sal*(0.05);break;
        case 2: bonus=sal*(0.10);break;
        }
    }
    printf("\n The bonus to be given to %s is %f \n",name,bonus);
    printf("\n The total salary is %f \n",sal+bonus);
    printf("\n Enter -1 to stop else any value to continue\n");scanf("%d",&i);
    }
    return 0;
}

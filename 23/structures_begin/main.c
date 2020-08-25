#include <stdio.h>
#include <stdlib.h>
void read(int m);
void display(int m);
struct date{
    int day;
    int month;
    int year;
};
struct account{
    char name[50];
    char street[50];
    char city[50];
    int acct_no;
    char acct_type;
    float oldbalance;
    float payment;
    float newbalance;
    struct date lastpayment;
}customer[100];
int main()
{
    int n;
    printf("\nEnter the number of customers: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        read(i);
        if (customer[i].payment>0)
            customer[i].acct_type=(customer[i].payment< (0.1)*customer[i].oldbalance)?'O':'C';
        else
            customer[i].acct_type=(customer[i].oldbalance>0)?'D':'C';
        customer[i].newbalance = customer[i].oldbalance - customer[i].payment;
    }
    for(int i=0;i<n;i++){
        display(i);
    }
    return 0;
}
void read(int i){
    printf("\nCustomer no. %d\n",i+1);
    fflush(stdin);
    printf(" Name: ");
    gets(customer[i].name);
    printf("\nStreet: ");
    gets(customer[i].street);
    printf("\nCity: ");
    gets(customer[i].city);
    printf("\nAccount number: ");
    scanf("%d",&customer[i].acct_no);
    printf("\nPrevious balance: ");
    scanf("%f",&customer[i].oldbalance);
    printf("\nCurrent Payment: ");
    scanf("%f",&customer[i].payment);
    printf("\nPayment date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&customer[i].lastpayment.day,&customer[i].lastpayment.month,&customer[i].lastpayment.year);
}
void display(int i){
    printf("\nName: %s",customer[i].name);
    printf("\nStreet: %s",customer[i].street);
    printf("\nCity: %s",customer[i].city);
    printf("\nAccount number: %d",customer[i].acct_no);
    printf("\n\nOld balance: %f",customer[i].oldbalance);
    printf("\nCurrent payment: %f",customer[i].payment);
    printf("\nNew balance: %f",customer[i].newbalance);
    printf("\nAccount status: ");
    switch(customer[i].acct_type){
case 'C': printf("CURRENT\n");break;
case 'D': printf("DELINQUENT\n");break;
case 'O': printf("OVERDUE\n");break;
default:  printf("ERROR\n");break;
    }
    return;
}

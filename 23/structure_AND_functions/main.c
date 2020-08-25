#include <stdio.h>
#include <stdlib.h>
#define N 3
#define NULL 0
typedef struct {
    char *name;
    int acct_no;
    char acct_type;
    float balance;
}record;

record *search(record table[],int acctn);

int main()
{
    static record customer[N]={
         {"Smith",3333,'C',33.33},
         {"Jones",6666,'O',66.66},
         {"Brown",9999,'D',99.99}
    };

    int acctn;
    record *pt;

    printf("Customer Account Locator\n");
    printf("To END, enter 0 for the account number\n");
    printf("\nAccount no.: ");
    scanf("%d",&acctn);

    while(acctn!=0){
        pt=search(customer,acctn);
        if(pt!=NULL){
            printf("\nName: %s\n",pt->name);
            printf("\nAccount no.: %d\n",pt->acct_no);
            printf("\nAccount type: %c\n",pt->acct_type);
            printf("\nBalance: %.2f\n",pt->balance);
        }
        else
            printf("\nERROR - Please try again\n");
        printf("\nAccount no.: ");
        scanf("%d",&acctn);
    }
    return 0;
}

record *search(record table[N],int acctn){
    int count;
    for(count=0;count<N;++count)
        if(table[count].acct_no == acctn){
            return(&table[count]);
        }
    return(NULL);
}

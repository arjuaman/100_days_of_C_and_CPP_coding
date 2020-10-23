#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class account{
protected:
    char cust_name[30];
    int acct_num;
    char acct_type;
    float balance=0;
    float w_amount=0;
    float deposit_amt;
public:
    void name(){
        cout<<"\nEnter your name: ";
        cin>>cust_name;
        cout<<"\n";
    }
    void account_num(){
        cout<<"\nEnter your account number: ";
        cin>>acct_num;
        cout<<"\n";
    }
    int account_type(){
        cout<<"\nPress 'S' for savings account and 'C' for current: ";
        cin>>acct_type;
        if(acct_type=='S')
            return 1;
        else if(acct_type=='C')
            return 0;
    }
    void deposit(){
        cout<<"\nEnter your amount to deposit: ";
        cin>>deposit_amt;
        cout<<"\n";
    }
    void display_acc(){
        balance+=deposit_amt;
        cout<<"Name is: "<<cust_name<<"\n";
        cout<<"Account number is: "<<acct_num<<"\n";
        //cout<<"Account type is: "<<acct_type<<"\n";
        cout<<"Account balance is: "<<balance<<"\n";
    }
} ;
class current:public account{
protected:
    float minm_bal=500;
    float service_charge=50;
public:
    void withdraw_frm_chkbk(){
        cout<<"\nEnter amount to withdraw: ";
        cin>>w_amount;
        cout<<"\n";
    }
    void display(){
        cout<<"\nIf your balance is below 500, 50 rupees service charge will be deducted.";
        //balance-=w_amount;
        if(balance<w_amount){
            cout<<"\nCan't withdraw more than balance";
        }
        else if(balance<minm_bal){
            cout<<"\nYour balance is below 500, 50 rupees service charge will be deducted too.";
            balance = balance - w_amount - service_charge;
        }
        else{
            balance-=w_amount;
        }
        cout<<"\nBalance is: "<<balance;
    }
};
class saving:public account{
protected:
    int years;
    int rate;
    float interest;
public:
    void enter_interest_det(){
        cout<<"\nEnter years: ";
        cin>>years;
        cout<<"\nEnter rate: ";
        cin>>rate;
    }
    void comp_interest(){
        rate=rate/100;
        int x;
        x=(pow((1.0+rate),years));
        cout<<x;
        interest=balance*x;
    }
    void withdraw(){
        cout<<"\nEnter amt to withdraw: ";
        cin>>w_amount;
        balance-=w_amount;
    }
    void display_intr(){
        cout<<"\nInterest is: "<<interest<<"\n";
        balance+=interest;
    }
};
int main()
{
    char ch;
    cout<<"\nPress 'S' for savings account and 'C' for current: ";
    cin>>ch;
    if(ch=='S'){
        saving s1;
        s1.name();
        s1.account_num();
        s1.deposit();
        s1.display_acc();
        s1.enter_interest_det();
        int i;
        cout<<"Do you want to withdraw? Press 1 for yes or any other number to pass: ";
        cin>>i;
        if(i==1){
            s1.withdraw();
        }
        s1.display_acc();
    }
    else if(ch=='C'){
        current c1;
        c1.name();
        c1.account_num();
        c1.deposit();
        c1.display_acc();
        c1.withdraw_frm_chkbk();
        c1.display();
    }
    else{cout<<"\nInvalid option, try again.";}

    return 0;
}

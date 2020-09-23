#include <iostream>
using namespace std;
class bank{
    char name[30];
    int account_num;
    char type_acc;
    float balance=0;
    float amt=0;
    int count;
public:
    void set_data();
    void deposit();
    void check_n_withdraw();
    void display();
};
void bank::set_data(){
    cout<<"\nEnter your name: ";
    cin>>name;
    cout<<"\nEnter your account number: ";
    cin>>account_num;
    count++;
}
void bank::deposit(){
    cout<<"\nEnter the amount to deposit: ";
    cin>>amt;
    balance+=amt;
    cout<<"\nBalance is: "<<balance;
}
void bank::check_n_withdraw(){
    cout<<"\nEnter your account number: ";
    cin>>account_num;
    cout<<"\nYour balance is: "<<balance;
    cout<<"\nEnter amount to withdraw: ";
    cin>>amt;
    if(amt>balance){
        cout<<"\nInvalid Move.";
    }
    else{
            balance-=amt;
    }
}
void bank::display(){
    cout<<"\nName: "<<name;
    cout<<"\nBalance: "<<balance;
}
int main()
{
    cout<<"\nEnter the number of customers: ";
    int size;
    cin>>size;
    bank customer[size];
    for(int i=0;i<size;i++){
        customer[i].set_data();
        customer[i].deposit();
        //customer[i].check_n_withdraw();
        //customer[i].display();
    }
    for(int i=0;i<size;i++){
        customer[i].check_n_withdraw();
        customer[i].display();
    }

    return 0;
}

#include <iostream>
using namespace std;
class fixed_deposit{
    long int pamt;    //principal amount
    int years;        //period of investment
    float rate;       //interest rate
    float r_value;    //return value of amount
public:
    fixed_deposit(){}
    fixed_deposit(long int p,int y,float r=0.12);
    fixed_deposit(long int p,int y,int r);    //for rate in %age
    void display(void);
};
fixed_deposit::fixed_deposit(long int p,int y,float r){
    pamt=p;
    years=y;
    rate=r;
    r_value=pamt;
    for(int i=1;i<=y;i++){
        r_value*=(1.0+r);
    }
}
fixed_deposit::fixed_deposit(long int p,int y,int r){
    pamt=p;
    years=y;
    rate=r;
    r_value=pamt;
    for(int i=1;i<=y;i++){
        r_value*=(1.0+float(r)/100);
    }
}
void fixed_deposit::display(void){
    cout<<"\n"
        <<"Principal Amount: "<<pamt<<"\n"
        <<"Return Value: "<<r_value<<"\n";
}
int main()
{
    fixed_deposit fd1,fd2,fd3;
    long int p;
    int y,R;
    float r;
    cout<<"\nEnter amount, period, interest rate(decimal form)"<<"\n";
    cin>>p>>y>>r;
    fd1=fixed_deposit(p,y,r);

    cout<<"\nEnter amount, period, interest rate(%age form)"<<"\n";
    cin>>p>>y>>R;
    fd2=fixed_deposit(p,y,R);

    cout<<"\nEnter amount and period: "<<"\n";
    cin>>p>>y;
    fd3=fixed_deposit(p,y);

    cout<<"\nDeposit 1: ";fd1.display();
    cout<<"\nDeposit 2: ";fd2.display();
    cout<<"\nDeposit 3: ";fd3.display();

    return 0;
}

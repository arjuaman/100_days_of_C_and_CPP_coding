#include <iostream>
using namespace std;
class M{
int x;
int y;
public:
    void set_xy(int a,int b){
        x=a;
        y=b;
    }
    friend int sum(M variable);
};
int sum(M variable){
    int M::*px=&M::x;
    int M::*py=&M::y;
    M *pm=&variable;
    int s=variable.*px+variable.*py;
    return s;
}
int main()
{
    M n;
    void (M::*pf)(int,int)= &M::set_xy;
    (n.*pf)(10,20);
    cout<<"\nSum is: "<<sum(n);

    M *op=&n;
    (op->*pf)(30,40);
    cout<<"\nSum is: "<<sum(n);

    return 0;
}

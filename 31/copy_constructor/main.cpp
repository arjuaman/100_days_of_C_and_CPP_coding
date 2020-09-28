#include <iostream>
using namespace std;
class code{
    int id;
public:
    code(){}
    code(int a){id=a;}
    code(code &x){
        id=x.id;
    }
    void display(void){
        cout<<"\nId is: "<<id;
    }
};
int main()
{
    code a(100);
    code b(a);
    code c = a;
    code d;
    d=a;
    cout<<"\nId of a is: ";a.display();
    cout<<"\nId of b is: ";b.display();
    cout<<"\nId of c is: ";c.display();
    cout<<"\nId of d is: ";d.display();
    return 0;
}

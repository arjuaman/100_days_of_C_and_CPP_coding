#include <iostream>
#include <conio.h>
using namespace std;
class test{

public:
    int num;
    test(int j){
        num=j;
    }
    test *operator ->(void){
        return this; //returns a pointer to itself,i.e a pointer to test class object
    }
};
int main()
{
    test T(5);
    test *Ptr=&T;
    cout << "T.num = " << T.num;
    cout<<"\nPtr->num = "<<Ptr->num;
    cout<<"\nT->num = "<<T->num;
    return 0;
}

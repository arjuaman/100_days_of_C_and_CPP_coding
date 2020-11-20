#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a,*ptr1,**ptr2;
    ptr1=&a;
    ptr2=&ptr1;
    cout << "The address of a : "<< ptr1 << "\n";
    cout<<"The address of ptr1: "<<ptr2<<"\n";
    ptr1+=9;
    cout<<"The address of a now after incrementing ptr1 by 9: "<<ptr1<<"\n";
    ptr2+=9;
    cout<<"The address of ptr1 now after incrementing ptr2 by 9: "<<ptr2<<"\n";
    return 0;
}

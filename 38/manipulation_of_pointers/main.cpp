#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    cout << "The value of a is: " <<*ptr;
    *ptr = *ptr + 10;
    cout<<"\nThe revised value of a is: " <<*ptr;
    return 0;
}

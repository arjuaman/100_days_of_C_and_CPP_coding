#include <iostream>
using namespace std;

int main()
{
    int a,b,*num1,*num2,temp;
    num1 = &a;
    num2 = &b;
    cout << "Enter 1st integer: " << endl;
    cin >> a;
    cout << "Enter 2nd integer: " << endl;
    cin >> b;
    cout << "Numbers before swapping are: " << *num1 << "\t" << *num2;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    cout << "Numbers before swapping are: " << *num1 << "\t" << *num2;

    return 0;
}

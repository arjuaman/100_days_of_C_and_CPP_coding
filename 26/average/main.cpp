#include <iostream>

using namespace std;

int main()
{
    float num1,num2,avg,sum;
    cout << "Enter the first number: ";
    cin>>num1;
    cout << "Enter the second number: ";
    cin>>num2;
    sum=num1+num2;
    avg=sum/2;
    cout << "Sum is "<< sum << endl ;
    cout<< "Average is "<<avg<<endl;
    return 0;
}

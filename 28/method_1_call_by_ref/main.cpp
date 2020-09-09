//method_1_call_by_ref
#include <iostream>
using namespace std;
void swap(int *,int *);
int main()
{
    cout << "Enter the first number: " ;
    int num1,num2;
    cin>>num1;
    cout<<"\nEnter the second number: ";
    cin>>num2;
    swap(num1,num2);
    std::cout<<"\n Numbers after swapping are: First Number is "<<num1<<" AND Second number is: "<<num2<<endl;

    return 0;
}
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    }

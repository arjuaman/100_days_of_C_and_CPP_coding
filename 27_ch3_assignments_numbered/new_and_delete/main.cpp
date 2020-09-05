#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    int *arr,size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    arr=new int[size];
    cout<<"Array created ";
    if(!arr){
        cout<<"Allocation failed";
    }
    delete arr;
    cout<<"Array deleted";
    return 0;
}

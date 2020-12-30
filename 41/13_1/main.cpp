#include <iostream>
#include <conio.h>
using namespace std;
void read_doub(){
    double a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    double x=a/b;
    try{
        if(b!=0)
            cout<<"\nResult of a/b is: "<<x<<endl;
        else
            throw 0;
    }
    catch(...){
        cout<<"\nDivide by zero error occured.\n";
    }
}
int main()
{
    read_doub();
    return 0;
}

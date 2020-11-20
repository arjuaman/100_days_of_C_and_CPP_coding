#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num[]={56,75,22,18,90};
    int *ptr,i;
    cout << "The array values are: " <<*ptr<<"\n";
    for(i=0;i<5;i++)
        cout<<num[i]<<"\t";
    ptr=num;
    cout<<"\nValue of ptr: "<<*ptr<<"\n";
    ptr++;
    cout<<"\nValue of ptr++: "<<*ptr<<"\n";
    ptr--;
    cout<<"\nValue of ptr--: "<<*ptr<<"\n";
    ptr+=2;
    cout<<"\nValue of ptr+=2: "<<*ptr<<"\n";
    ptr-=1;
    cout<<"\nValue of ptr-=1: "<<*ptr<<"\n";
    ptr+=3;
    cout<<"\nValue of ptr+=3: "<<*ptr<<"\n";
    ptr-=2;
    cout<<"\nValue of ptr-=2: "<<*ptr<<"\n";
    return 0;
}

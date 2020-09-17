#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
void area(int,int);
void area(int);
int main()
{
    int x,y,z,m,n;
    cout << "Enter the base of triangle: " << endl;
    cin>>x;
    cout << "\nEnter the height of triangle: " << endl;
    cin>>y;
    cout << "\nEnter the radius of circle: " << endl;
    cin>>z;
    area(x,y);
    area(z);
    return 0;
}
void area(int b,int h){
    float out = 0.5*b*h;
    cout<<"\nArea is: "<<out;
}
void area(int r){
    float out = 3.14*r*r;
    cout<<"\nArea is: "<<out;
}

#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
double add(double a,double b,double c){
    return(a+b+c);
}
int main()
{
    int a =add(3,4);
    double d = add(3.4,4.5,64.3);
    cout << a << "\t"<< d;
    return 0;
}

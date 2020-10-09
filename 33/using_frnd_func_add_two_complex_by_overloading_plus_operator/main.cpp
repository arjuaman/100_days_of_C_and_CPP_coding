#include <iostream>
using namespace std;
class complex{
    float real,imag;
public:
    complex(){}
    complex(float x,float y){
        real=x;imag=y;
    }
    void display(void){
        cout<<real<<" + j "<<imag<<"\n";
    }
    friend complex operator+(complex,complex);
};
complex operator+(complex c,complex c2){
    complex temp;
    temp.real=c2.real+c.real;
    temp.imag=c2.imag+c.imag;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1 = complex(2.5,3.5);
    c2 = complex(1.6,2.7);
    c3 = c1 + c2;
    cout<<"c1 = ";c1.display();
    cout<<"c2 = ";c2.display();
    cout<<"c3 = ";c3.display();
    //cout << "Hello world!" << endl;
    return 0;
}

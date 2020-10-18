#include <iostream>
#include <math.h>
using namespace std;
class complex{
    float real,imag;
public:
    complex(){}
    complex(float x,float y){
        real=x;
        imag=y;
    }
    void display(){
        cout<<"Number is: "<<real<<" + j "<<imag<<"\n";
    }
    void operator-(){
        real= -real;
        imag= -imag;
    }
    complex operator+(complex x){
        complex temp;
        temp.real=real+x.real;
        temp.imag=imag+x.imag;
        return temp;
    }
    complex operator-(complex x){
        complex temp;
        temp.real=real-x.real;
        temp.imag=imag-x.imag;
        return temp;
    }
    complex friend operator*(complex,complex);
};
complex operator*(complex x,complex y){
    complex temp;
    temp.real=(x.real*y.real)-(x.imag*y.imag);
    temp.imag=(x.real*y.imag)+(x.imag*y.real);
    return temp;
}
int main()
{
    complex c1,c2,c3,c4,c5,c6;
    c1=complex(1,1);
    c1.display();
    //-c1;
    //c1.display();
    c2=complex(1,1);
    c2.display();
    c3=c1+c2;
    c3.display();
    c4=c1*c2;
    c4.display();
    c5=c4-c1;
    c5.display();

    return 0;
}

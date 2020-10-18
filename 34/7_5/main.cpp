#include <iostream>
#include <math.h>
using namespace std;
class polar;
class rectangle{
    float x;
    float y;
public:
    rectangle(){}
    rectangle(float m,float n){
        x=m;
        y=n;
    }
    void display(){
        cout<<"X-coordinate is: "<<x<<"\n";
        cout<<"Y-coordinate is: "<<y<<"\n";
    }
    float getx(){return x;}
    float gety(){return y;}
//    rectangle(polar p){
//        x=p.getradius()*cos(p.getangle());
//        y=p.getradius()*sin(p.getangle());
//    }
};
class polar{
    float radius;
    float angle;
public:
    polar(){}
    polar(float m,float n){
        radius=m;
        angle=n;
    }
    void display(){
        cout<<"Radius is: "<<radius<<"\n";
        cout<<"Angle is: "<<angle<<"\n";
    }
    float getradius(){return radius;}
    float getangle(){return angle;}
    polar(rectangle r){
        radius=sqrt((r.getx()*r.getx())+(r.gety()*r.gety()));
        angle=atan((r.gety())/(r.getx()));
    }
};
int main()
{
    rectangle r1,r2;
    polar p1,p2;
    r1=rectangle(3,4);r1.display();
    p1=polar(5,90);p1.display();
    cout<<"\nConversion time: ";
//    r2=p1;r2.display();
    p2=r1;p2.display();

    return 0;
}

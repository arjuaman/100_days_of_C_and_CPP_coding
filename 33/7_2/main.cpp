#include <iostream>
#include <math.h>
using namespace std;
class polar{
    float radius;
    float angle;
    //float x,y;
public:
    polar(){}
    polar(float r,float a){
        radius=r;
        angle=a;
        //x=radius*cos(angle);
        //y=radius*sin(angle);
    }
    polar operator+(polar var){
        polar temp;
        //temp.x = x + var.x;
        //temp.y = y + var.y;
        float x=radius*cos(angle); float x2=var.radius*cos(var.angle);
        float y=radius*sin(angle); float y2=var.radius*sin(var.angle);
        temp.radius = sqrt((x+x2)*(x+x2)+(y+y2)*(y+y2));
        temp.angle = atan((y+y2)/(x+x2));
        return temp;
    }
    void display(){
        cout<<"Radius is: "<<radius<<"\n";
        cout<<"Angle is: "<<angle<<"\n";
    }
};
int main()
{
    polar p1,p2,p3,p4;
    p1=polar(3,63);
    p2=polar(4,27);
    p3=p1+p2;
    p1.display();
    p2.display();
    p3.display();
    return 0;
}

#include <iostream>

using namespace std;

class Temp{
    float ftemp,ctemp;
public:
    void getdata(void);
    void display(void);
};

void Temp::getdata(void){
cout<<"Enter the temp in Fahrenheit: ";
cin>>ftemp;
}
void Temp::display(void){
ctemp=((ftemp-32)*5)/9;
//cout<<" "<<ftemp;
cout<<"Temp in Celsius: "<<ctemp;
}

int main()
{
    Temp t;
    t.getdata();
    t.display();
    return 0;
}

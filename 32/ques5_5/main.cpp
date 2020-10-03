#include <iostream>
using namespace std;
//class DM{};
class DB;
class DM{
    float dist_m;
    float dist_cm;
public:
    void setdata(){
        cout<<"\nEnter distance in metres and cm: ";
        cin>>dist_m>>dist_cm;
    }
    void display(){
        cout<<"\nThe distance is "<<dist_m<<"metres and "<<dist_cm<<"cms.\n";
    }
    friend void add(DM,DB);
};
class DB{
    float dist_f;
    float dist_in;
public:
    void setdata2(){
        cout<<"\nEnter distance in feet and inches: ";
        cin>>dist_f>>dist_in;
    }
    void display2(){
        cout<<"\nThe distance is "<<dist_f<<"feets and "<<dist_in<<"inches.\n";
    }
    friend void add(DM,DB);
};
void add(DM p,DB q){
    float tot_cms = p.dist_m*100 + p.dist_cm;
    float tot_inches = q.dist_f*12 + q.dist_in;
    float inch_to_cm = 2.54;
    float cm_to_inch = 0.393701;
    float net_inches= tot_cms*cm_to_inch+tot_inches;
    float net_feet=net_inches/12;
    float net_inches2=abs(net_inches-12*net_feet);
    cout<<"\nSum is: "<<net_feet<<"feets and "<<net_inches2<<"inches.\n";
}
int main()
{
    DM m1;
    DB f1;
    m1.setdata();
    m1.display();
    f1.setdata2();
    f1.display2();
    add(m1,f1);
    return 0;
}

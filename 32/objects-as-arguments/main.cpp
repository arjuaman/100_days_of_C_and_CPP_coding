#include <iostream>

using namespace std;
class time{
int hours;
int minutes;
public:
    void gettime(int h,int m){
    hours=h;minutes=m;}
    void puttime(void){
    cout<<"\n"<<hours<<" hours and "<<minutes<<" minutes";
    }
    void sum(time,time);
};
void time::sum(time t1,time t2){
minutes=t1.minutes+t2.minutes;
hours=minutes/60;
minutes=minutes%60;
hours=hours+t1.hours+t2.hours;
}
int main()
{
    //cout << "Hello world!" << endl;
    time tx,ty,tz;
    tx.gettime(2,45);
    ty.gettime(3,30);

    tz.sum(tx,ty);
    tx.puttime();
    ty.puttime();
    tz.puttime();

    return 0;
}

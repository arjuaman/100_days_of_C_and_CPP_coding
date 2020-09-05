#include <conio.h>
#include <iostream>
using namespace std;

class Sample{
private:
    int data1;
    char data2;
public:
    void set(int i,char c);
    void display(void);
};

void Sample::set(int i,char c){
    data1=i;
    data2=c;
}

void Sample::display(void){
    cout<<"Data1 = "<<data1;
    cout<<"\nData2 = "<<data2;
}

int main()
{
    Sample *sptr;
    try{
    sptr=new Sample;
    }
    catch(bad_alloc ba){
    cout<<"Bad allocation, exiting ";
    return 1;
    }

    sptr->set(25,'A');
    sptr->display();

    delete sptr;
    return 0;
}

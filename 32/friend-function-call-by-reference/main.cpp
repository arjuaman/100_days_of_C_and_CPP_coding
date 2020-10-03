#include <iostream>
using namespace std;
class c2;
class c1{
    int value1;
public:
    void indata(int a){value1=a;}
    void display(void){cout<<value1<<"\n";}
    friend void exchange(c1 &, c2 &);
};
class c2{
int value2;
public:
    void indata(int a){value2=a;}
    void display(void){cout<<value2<<"\n";}
    friend void exchange(c1 &, c2 &);
};
void exchange(c1 &x,c2 &y){
int temp = x.value1;
x.value1=y.value2;
y.value2=temp;
}
int main()
{
//    cout << "Hello world!" << endl;
    c1 tx;
    c2 ty;
    tx.indata(100);
    ty.indata(200);
    cout<<"Values before exchange: "<<"\n";
    tx.display();
    ty.display();
    exchange(tx,ty);
    cout<<"Values after exchange: "<<"\n";
    tx.display();
    ty.display();
    return 0;
}

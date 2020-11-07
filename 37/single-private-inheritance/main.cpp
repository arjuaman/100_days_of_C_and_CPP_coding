#include <iostream>
using namespace std;
class b{
    int a;
public:
    int b1;
    void set_ab(){
        a=5;b1=10;
    }
    int get_a(void){
        return(a);
    }
    void show_a(void){
        cout<<"a is: "<<a<<"\n";
    }
};
class d:private b{
    int c;
public:
    void mul(void){
        set_ab();
        c=b1*get_a();
    }
    void display(void){
        show_a();
       // cout<<"a is: "<<get_a()<<"\n";
        cout<<"b is: "<<b1<<"\n";
        cout<<"c is: "<<c<<"\n";
    }
};
int main()
{
    d obj1;
    //obj1.set_ab();
    obj1.mul();
    //obj1.show_a();
    obj1.display();

    //obj1.b1=20;
    obj1.mul();
    obj1.display();

    return 0;
}

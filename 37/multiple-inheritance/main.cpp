#include <iostream>
using namespace std;
class M{
protected:
    int m;
public:
    void get_m(int x){
        m=x;
    }
};
class N{
protected:
    int n;
public:
    void get_n(int x){
        n=x;
    }
};
class P:public M,public N{
public:
    void display(){
        cout<<"m is: "<<m<<"\n";
        cout<<"n is: "<<n<<"\n";
        cout<<"m*n is: "<<m*n<<"\n";
    };
};
int main()
{
    P obj1;
    obj1.get_m(20);
    obj1.get_n(10);
    obj1.display();
    //cout << "Hello world!" << endl;
    return 0;
}

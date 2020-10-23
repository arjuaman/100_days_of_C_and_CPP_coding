#include <iostream>
using namespace std;
class M{
protected:
    int m;
public:
    void get_m(int x){
        m=x;
    }
    void display(){              //here also same name
        cout<<"m is: "<<m<<"\n";
    }
};
class N{
protected:
    int n;
public:
    void get_n(int x){
        n=x;
    }
    void display(){              //here too same name
        cout<<"n is: "<<n<<"\n";
    }
};
class P:public M,public N{
public:
    void display(){
        M::display(); //M's display
        N::display(); //N's display
        cout<<"m*n is: "<<m*n<<"\n";
    };
};
int main()
{
    P obj1;
    obj1.get_m(20);
    obj1.get_n(10);
    //obj1.M::display(); //alternative way
    //obj1.N::display(); //alternative way
    obj1.display();
    //cout << "Hello world!" << endl;
    return 0;
}

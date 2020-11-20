// if B is a base class and D is a derived class from B, then a pointer declared as a pointer to B can also be a pointer to D.

// B *cptr;
// B b;
// D d;
// cptr=&b;
// cptr=&d;

// However there is a problem in using cptr to access the public members of the derived class D. Using cptr, we can access only those members which're
// inherited from B and not the members that originally belong to D. In case a member of D has the same name as one of the members of B, then any
// reference to that member by cptr will always access the base class member. Although C++ permits a base pointer to point to any object derived
// from that base, the pointer cannot be directly used to access all the members of the derived class. We may have to use another
// pointer declared as pointer to the derived type.

#include <iostream>
#include <cstring>
using namespace std;
class BC{
public:
    int b;
    void show(){
        cout<<"b from BC class = "<<b<<"\n";
    }
};
class DC:public BC{
public:
    int d;
    void show(){
        cout<<"b from DC class = "<<b<<"\n";
        cout<<"d from DC class = "<<d<<"\n";
    }
};
int main()
{
    BC *bptr;           //base pointer
    BC base;
    bptr=&base;         //base address
    bptr->b=100;         //access BC via base pointer
    cout<<"bptr points to base object \n";
    bptr->show();

    //derived class
    DC derived;
    bptr=&derived;      //address of derived object
    bptr->b=200;

    /* bptr->d=300; */  //won't work

    cout<<"bptr now points to derived object \n";
    bptr->show();

    DC *dptr;
    dptr=&derived;
    dptr->d=300;
    cout<<"dptr is derived type pointer\n";
    dptr->show();

    cout<<"using ((DC*)bptr)\n";
    ((DC *)bptr)->d=400;
    ((DC *)bptr)->show();

    return 0;
}

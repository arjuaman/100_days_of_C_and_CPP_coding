#include <iostream>
using namespace std;
int count=0;
class test{
public:
    test(){
        count++;
        cout<<"\n\nConstructor Msg: Object number "<<count<<"created..";
    }
    ~test(){
        cout<<"\n\nDestructor Msg: Object number "<<count<<"destroyed..";
        count--;
    }
};
int main()
{
    cout << "Inside the main block..";
    cout<<"\nCreating first object T1..";
    test T1;
    {
        cout<<"\n\nInside BLock 1..";
        cout<<"\n\nCreating two more objects T2 and T3..";
        test T2,T3;
        cout<<"\n\nLeaving Block 1..";
    }
    cout<<"\n\nBack inside the main block..";
    return 0;
}

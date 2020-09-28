#include <iostream>
#include <conio.h>
using namespace std;
class test{
    int *a;
public:
    test(int size){
        a=new int[size];
        cout<<"\nConstructor msg: integer array of size "<<size<<"created..";
    }
    ~test(){
        delete a;
        cout<<"\ndestructed the memory allocated for integer array";
    }
};
int main()
{
    int s;
    cout <<"Enter the size of the array: ";
    cin>>s;
    cout<<"\nCreating an object of test class..";
    test T(s);
    cout<<"\nPress any key to end the program..";
    getch();

    return 0;
}

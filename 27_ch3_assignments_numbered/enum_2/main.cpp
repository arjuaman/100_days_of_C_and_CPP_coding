#include <iostream>
using namespace std;
//enum is used to define symbolic constants for a switch statement
enum shape{circle,rectangle,triangle};

int main()
{
    int code;
    cout << "Enter shape code: " << endl;
    cin>>code;
    while(code>=circle && code<=triangle){
    switch(code){
    case circle:
        break;
    case rectangle:
        break;
    case triangle:
        break;

        }
    cout << "Enter shape code: " << endl;
    cin>>code;
    }
    cout<<"Bye";
    return 0;
}

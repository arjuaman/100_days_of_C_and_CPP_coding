#include <iostream>

using namespace std;

int main()
{
    cout << "Maths = 90\n Physics = 77\n Chemistry = 69" << endl;
    float a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    cout<<((a>b)?a:b)<<endl;
    char m;
    cout<<"Enter the character: ";
    cin>>m;
    cout<<int(m)<<endl;
    float c;
    cout<<"Enter the third number to use in x = a/b-c :";
    cin>>c;
    float x = a / b - c ;
    cout<<x<<endl;
    return 0;
}

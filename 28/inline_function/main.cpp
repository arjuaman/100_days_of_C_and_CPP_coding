#include <iostream>
using namespace std;
inline double cube(double a){
        return(a*a*a);
    }
int main()
{
    cout << "Enter a number: " << endl;
    int num,i;
    cin>>num;
    i = cube(num);
    cout<<endl<<i;
    return 0;
}

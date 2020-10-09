#include <iostream>
using namespace std;
class space{
    int x,y,z;
public:
    space(int a,int b,int c){
        x=a;y=b;z=c;
    }
    void display(void){
        cout<<"x = "<<x<<" ";
        cout<<"y = "<<y<<" ";
        cout<<"z = "<<z<<"\n";
    }
    void operator-(){
        x= -x;
        y= -y;
        z= -z;
    }
};
int main()
{
    space s(10,-20,30);
    s.display();
    -s;
    s.display();
    //cout << "Hello world!" << endl;
    return 0;
}

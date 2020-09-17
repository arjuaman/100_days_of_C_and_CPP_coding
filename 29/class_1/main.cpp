#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class item{
private:
    int number;
    float cost;
public:
    void getdata(int a,int b);
    void display(void);
}y;
void item::getdata(int a,int b){
    number = a;
    cost = b;
}
void item::display(void){
    cout<<"Number: "<<number<<endl;
    cout<<"Cost: "<<cost<<endl;
}
int main()
{
    item x;
    x.getdata(234,69);
    x.display();
    y.getdata(12,3);
    y.display();
    //cout << "Hello world!" << endl;
    return 0;
}

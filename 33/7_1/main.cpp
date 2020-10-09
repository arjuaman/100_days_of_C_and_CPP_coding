#include <iostream>
using namespace std;
class Float{
    float num;
public:
    Float(){}
    Float(float x){
        num=x;
    }
    Float operator+(Float x){
        Float temp;
        temp.num=num+x.num;
        return(temp);
    }
    Float operator-(Float x){
        Float temp;
        temp.num=num-x.num;
        return(temp);
    }
    void display(){
        cout<<"Number is: "<<num<<"\n";
    }
};
int main()
{
    Float n1,n2,n3,n4;
    n1=Float(9);
    n2=Float(14);
    n3=n1+n2;
    n4=n1-n2;
    n1.display();
    n2.display();
    n3.display();
    n4.display();
    return 0;
}

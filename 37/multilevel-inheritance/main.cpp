#include <iostream>
using namespace std;
class student{
protected:
    int roll_num;
public:
    void get_roll(int x){
        roll_num=x;
    }
    void disp_roll(){
        cout<<"Roll number is: "<<roll_num<<"\n";
    }
};
class test:public student{
protected:
    float sub1;
    float sub2;
public:
    void get_marks(float x,float y){
        sub1=x;
        sub2=y;
    }
    void put_marks(){
        cout<<"Marks in subject 1: "<<sub1<<"\n";
        cout<<"Marks in subject 2: "<<sub2<<"\n";
    }
};
class result:public test{
protected:
    float total;
public:
    void display(){
        total=sub1+sub2;
        disp_roll();
        put_marks();
        cout<<"Total marks is: "<<total<<"\n";
    }
};
int main()
{
    result stud1;
    stud1.get_roll(170102009);
    stud1.get_marks(93,95);
    stud1.display();
//    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>
using namespace std;
class student{
protected:
    int roll_num;
public:
    void get_roll(int);
    void show_roll();
};
class test:public student{
protected:
    float part1,part2;
public:
    void get_marks(float,float);
    void show_marks();
};
class sports{
protected:
    float score;
public:
    void get_score(float);
    void show_score();
};
class result:public test,public sports{
protected:
    float total;
public:
    void display();
};
void student::get_roll(int x){
    roll_num=x;
}
void student::show_roll(){
    cout<<"Roll Number is: "<<roll_num<<"\n";
}
void test::get_marks(float x,float y){
    part1=x;part2=y;
}
void test::show_marks(){
    cout<<"Marks in subject 1: "<<part1<<"\n";
    cout<<"Marks in subject 2: "<<part2<<"\n";
}
void sports::get_score(float x){
    score=x;
}
void sports::show_score(){
    cout<<"Score is: "<<score<<"\n";
}
void result::display(){
    total=part1+part2+score;
    show_roll();
    show_marks();
    show_score();
    cout<<"Total score is: "<<total<<"\n";
}
int main()
{
    result stud1;
    stud1.get_roll(170102009);
    stud1.get_marks(97,93);
    stud1.get_score(83);
    stud1.display();

    return 0;
}

#include <iostream>

using namespace std;
class employee{
char name[30];
float age;
public:
    void getdata(void);
    void putdata(void);
};
void employee::getdata(void){
cout<<"\nEnter name: ";
cin>>name;
cout<<"\nEnter age: ";
cin>>age;
}
void employee::putdata(void){
cout<<"\nName: "<<name;
cout<<"\nAge: "<<age;
}
int main()
{
    employee manager[5];
    for (int i=0;i<5;i++){
        manager[i].getdata();
    }
    for (int i=0;i<5;i++){
        manager[i].putdata();
    }
    //cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;
class city{
protected:
    char *name;
    int len;
public:
    city(){
        len=0;
        name=new char[len+1];
    }
    void getname(){
        char *s;
        s=new char[30];

        cout<<"\nEnter city name: ";
        cin>>s;
        len=strlen(s);
        name=new char[len+1];
        strcpy(name,s);
    }
    void printnamme(){
        cout<<"\n"<<name<<"\n";
    }
};
int main()
{
    city *cptr[10];
    int n=0;
    int option;
    do{
        cptr[n]=new city;
        cptr[n]->getname();
        n++;
        cout<<"Wanna enter one more?\n";
        cout<<"1 for YES, 0 for NO";
        cin>>option;
    }while(option);
    cout<<"\n";
    for(int i=0;i<n;i++){
        cptr[i]->printnamme();
    }

    return 0;
}

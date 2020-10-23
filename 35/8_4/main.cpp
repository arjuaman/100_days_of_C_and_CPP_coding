#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
class staff{
protected:
    int code;
    char *name;
public:
    staff(){}
    staff(int code1,char *name1){
        code=code1;
        int length;
        length=strlen(name1);
        name=new char[length+1];
        strcpy(name,name1);
    }
    void display(){
        cout<<"Staff code is: "<<code<<"\n";
        cout<<"Name is: "<<name<<"\n";
    }
};
class education{
protected:
    char *g_qual;
    char *p_qual;
public:
    education(){}
    education(char *gen,char *prof){
        int len1,len2;
        len1=strlen(gen);
        len2=strlen(prof);
        g_qual=new char[len1+1];
        p_qual=new char[len2+1];
        strcpy(g_qual,gen);
        strcpy(p_qual,prof);
    }
    void display_ed(){
        cout<<"General qualification is: "<<g_qual<<"\n";
        cout<<"Professional qualification is: "<<p_qual<<"\n";
    }
};
class teacher:public staff,public education{
protected:
    char *subject;
    char *publication;
public:
    teacher(){}
    teacher(int code1,char *name1,char *gen,char *prof,char *sub1,char *pub1):
        staff(code1,name1),education(gen,prof){
        int len1,len2;
        len1=strlen(sub1);
        len2=strlen(pub1);
        subject=new char[len1+1];
        publication=new char[len2+1];
        strcpy(subject,sub1);
        strcpy(publication,pub1);
    }
    void display_t(){
        cout<<"Subject is: "<<subject<<"\n";
        cout<<"Publication is: "<<publication<<"\n";
    }
};
class officer:public staff,public education{
protected:
    char grade;
public:
    officer(){}
    officer(int code1,char *name1,char *gen,char *prof,char grd1):
        staff(code1,name1),education(gen,prof){
        grade=grd1;
    }
    void display_o(){
        cout<<"Grade is: "<<grade;
    }
};
class typist:public staff{
protected:
    int speed;
public:
    typist(){}
    typist(int code1,char *name1,int spd):
        staff(code1,name1){
        speed=spd;
    }
    void display_typ(){
        cout<<"Speed is: "<<speed<<"\n";
    }
};
class regular:public typist{
public:
    regular(){}
    regular(int code1,char *name1,int spd):
        typist(code1,name1,spd){}
};
class casual:public typist{
protected:
    float dailywage;
public:
    casual(){}
    casual(float wage,int code1,char *name1,int spd):
        typist(code1,name1,spd){
        dailywage=wage;
    }
    void display_c(){
        cout<<"Daily wage of casual typists are: "<<dailywage<<"\n";
    }
};
int main()
{
    casual c1;
    c1=casual(2100,002,"Ganesh",50);
    c1.display();
//    c1.display_t();
    c1.display_typ();
//    c1.display_o();
    c1.display_c();

    teacher t1; //int code1,char *name1,char *gen,char *prof,char *sub1,char *pub1
    t1=teacher(001,"Dr. D. Ray","10th, 12th, B.A","B.Ed","Maths","Barcode Reader");
    t1.display();
    t1.display_ed();
    t1.display_t();

    return 0;
}

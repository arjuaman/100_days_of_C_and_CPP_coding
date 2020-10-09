#include <iostream>
#include <string.h>
using namespace std;
class String{
    char *p;
    int len;
public:
    String(){len=0;p=0;}     //create null string
    String(const char *s);   //create string from arrays
    String(const String &s); //copy constructor
    ~String(){delete p;}     //destructor
    friend String operator+(const String &s,const String &t);
    friend int operator<=(const String &s,const String &t);
    friend void show(const String s);
};
String::String(const char *s){
    len=strlen(s);
    p=new char[len+1];
    strcpy(p,s);
}
String::String(const String &s){
    len=s.len;
    p=new char[len+1];
    strcpy(p,s.p);
}
String operator+(const String &s,const String &t){
    String temp;
    temp.len = s.len + t.len;
    temp.p = new char[temp.len+1];
    strcpy(temp.p,s.p);
    strcat(temp.p,t.p);
    return(temp);
}
int operator<=(const String &s,const String &t){
    int m=strlen(s.p);
    int n=strlen(t.p);
    if(m<=n)
        return(1);
    else
        return(0);
}
void show(const String s){
    cout<<s.p;
}
int main()
{
    String s1="New ";
    String s2="York";
    String s3="Delhi";
    String string1,string2,string3;
    string1 = s1;
    string2 = s2;
    string3 = s1+s3;
    show(string1);
    show(string2);
    show(string3);
    if(string1<=string3){
        show(string1);
        cout<<"Smaller than";
        show(string3);
    }

    return 0;
}

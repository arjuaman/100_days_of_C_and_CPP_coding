#include <iostream>
#include <cstring>
using namespace std;
class String{
    char *str;
    int length;
public:
    String(){
        length=0;
        str = new char[length+1];
    }
    String(char *p){
        //delete str;
        int len=0;
        char *s,*z;
        s=p;z=p;
        while(*s!='\0'){
            s++;len++;
        }
        length=len;
        //cout<<"\nLength is: "<<length;
        str =new char[length+1];
        strcpy(str,p);
    }
    String(String &x){
        str=x.str;
    }
    void join(String &a,String &b);
    void display(void){
        cout<<"\nString is: "<<str;
    }
};
void String::join(String &a,String &b){
    length = a.length+b.length;
    delete str;
    str = new char[length+1];
    strcpy(str,a.str);
    //strcat(str,' ');
    strcat(str,b.str);
}
int main()
{
    String s1;
    String s2("Well done!"),s3("Rashmu");
    s2.display();
    String s4(s2);
    s4.display();
    String s5;
    s5.join(s2,s3);
    s5.display();
    return 0;
}

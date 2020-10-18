#include <iostream>
#include <cstring>
using namespace std;
class stringg{
    int len;
    char *p;
public:
    stringg(){len=0;p=0;}
    stringg(const char *s){
        len=strlen(s);
        p=new char[len+1];
        strcpy(p,s);
    }
    int operator==(stringg x){

        int n = strcmp(p,x.p);
        //cout<<"\n"<<p<<n<<x.p;
        return(n);
    }
    void display(){
        cout<<p;
    }
};
int main()
{
    stringg s1,s2,s3;
    s1=stringg("New");
    s1.display();
    cout<<"\n";
    s2=stringg("New");
    s2.display();
    if((s1==s2)==0)
        cout<<"\nEqual strings";
    else
        cout<<"\nUnequal strings";
    return 0;
}

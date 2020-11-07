#include <iostream>
using namespace std;
class alpha{
    int x;
public:
    alpha(int i){
        x=i;
        cout<<"alpha constructed\n";
    }
    void show_alpha(void){
        cout<<"x = "<<x<<"\n";
    }
};
class beta{
    float p,q;
public:
    beta(float a,float b):p(a),q(p+b){
        cout<<"bata constructed\n";
    }
    void show_beta(void){
        cout<<"p = "<<p<<"\n";
        cout<<"q = "<<q<<"\n";
    }
};
class gamma{
    int u,v;
    alpha o1;  //a is object of alpha
    beta o2;   //b is object of beta
public:
    gamma(int a,int b,float c): o1(a*2),o2(c,c),u(a){
            v=b;
            cout<<"gamma constructed\n";
            //o1.show_alpha();
            //o2.show_beta();
        }
    void show_gamma(){
            o1.show_alpha();
            o2.show_beta();
        cout<<"u = "<<u<<"\n";
        cout<<"v = "<<v<<"\n";
    }
};
int main()
{
    gamma g(2,4,2.5);
    cout << "\n";
    //g.show_alpha();
    //g.show_beta();
    g.show_gamma();
    //g.o1.show_alpha();
    //g.o2.show_beta()

    return 0;
}

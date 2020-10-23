#include <iostream>
using namespace std;
class alpha{
    int x;
public:
    alpha(int i){
        x=i;
        cout<<"alpha initialized\n";
    }
    void show_x(void){
        cout<<"x = "<<x<<"\n";
    }
};
class beta{
    float y;
public:
    beta(float i){
        y=i;
        cout<<"beta initialized\n";
    }
    void show_y(void){
        cout<<"y = "<<y<<"\n";
    }
};
class gamma:public beta,public alpha{
    int m,n;
public:
    gamma(int a,float b,int c,int d):
        alpha(a),beta(b){
            m=c;
            n=d;
            cout<<"gamma initialized\n";
        }
    void show_mn(){
        cout<<"m = "<<m<<"\n";
        cout<<"n = "<<n<<"\n";
    }
};
int main()
{
    gamma g(9,7.97,14,9);
    cout << "\n";
    g.show_x();
    g.show_y();
    g.show_mn();

    return 0;
}

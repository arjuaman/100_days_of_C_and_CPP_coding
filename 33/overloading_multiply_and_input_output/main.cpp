#include <iostream>
using namespace std;
const int size1=3;
class vector{
    int v[size1];
public:
    vector(); //null vector
    vector (int *x); //vector from array
    friend vector operator *(int a,vector b);
    friend vector operator *(vector a,int b);
    friend istream & operator >>(istream &,vector &);
    friend ostream & operator <<(ostream &,vector &);
};
vector::vector(){
    for(int i=0;i<size1;i++)
        v[i]=0;
}
vector::vector(int *x){
    for(int i=0;i<size1;i++)
        v[i]=x[i];
}
vector operator*(int a,vector b){
    vector c;
    for(int i=0;i<size1;i++)
        c.v[i]=a*b.v[i];
    return c;
}
vector operator*(vector a,int b){
    vector c;
    for(int i=0;i<size1;i++)
        c.v[i]=a.v[i]*b;
}
istream & operator >> (istream &din,vector &b){
    for(int i=0;i<size1;i++)
        din>>b.v[i];
    return(din);
}
ostream & operator << (ostream &dout, vector &b){
    dout<<"("<<b.v[0];
    for(int i=1;i<size1;i++)
        dout<<", "<<b.v[i];
    dout<<")";
    return(dout);
}
int x[size1]={2,4,6};
int main()
{
    vector m;
    vector n=x;
    cout << "Enter elements of vector m " << "\n";
    cin>>m;
    cout<<"\n";
    cout<<"m = "<<m<<"\n";

    vector p,q;

    p=2*m;
    q=n*2;

    cout<<"\n";
    cout<<"p = "<<p<<"\n";
    cout<<"q = "<<q<<"\n";

    return 0;
}

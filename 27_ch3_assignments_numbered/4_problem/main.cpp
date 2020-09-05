#include <iostream>
using namespace std;

float calc(float principal,float rate,int year);

int main()
{
    int n,i,j;
    float eqn,p,r,res;
    //p=1000;
    //r=0.10;
    //n=5;
    //eqn = p*(1+r);
    //res = calc(p,r,n);
    //cout<<res;

    for(p=1000;p<=10000;p+=1000){
        for(r=0.10;r<0.21;r+=0.01){
            for(n=1;n<=10;n++){
                    res=calc(p,r,n);
                    cout<<"Compound interest on principal amount of "<<p<<" and rate "<<r<<" at year "<<n<<" is " <<res<<"\n";
            }
            cout<<"\n";
        }
    }

    return 0;
}

float calc(float principal,float rate,int year){
    float out;
    out = principal * (1+rate);
    if(year==1){
    //out = principal * (1+rate);
    return out;
}
    else{
        out = calc(out,rate,year-1);
        return out;
    }
}

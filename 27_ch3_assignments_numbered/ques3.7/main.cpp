#include <iostream>
#include <math.h>
using namespace std;
int fact1(int n);
int main()
{
    cout << "sin(x): \n" << endl;
    int i,j,num,sum=0,count1=0,fact=1;
    float x,sin;
    for(x=1;x<=7;x+=2){
        sin = (-1)*pow(x,x)/fact1(x);
    }
    return 0;
}
int fact1(int n){
    int prod=1;
    for(int i=1;i<=n;i++){
        prod = prod*i;
    }
    return prod;
}

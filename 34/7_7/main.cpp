#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
class fractional{
    float num,den;
public:
    fractional(){}
    fractional(float x,float y){
        num=x;
        den=y;
    }
    void display(){
        cout<<" Fraction is: "<<num<<"/"<<den<<"\n";
    }
    int operator==(fractional x){
        float num1=num/den;
        float num2=x.num/x.den;
        if(num1==num2)
            return 1;
        else
            return 0;
    }
    int operator!=(fractional x){
        float num1=num/den;
        float num2=x.num/x.den;
        if(num1!=num2)
            return 1;
        else
            return 0;
    }
    int operator>=(fractional x){
        float num1=num/den;
        float num2=x.num/x.den;
        if(num1>=num2)
            return 1;
        else
            return 0;
    }
    int operator<=(fractional x){
        float num1=num/den;
        float num2=x.num/x.den;
        if(num1<=num2)
            return 1;
        else
            return 0;
    }
};
int main()
{
    fractional f1,f2,f3,f4;
    int res1,res2,res3,res4;
    f1=fractional(1,4);
    f2=fractional(3,4);
    f3=fractional(1,2);
    f4=fractional(1,4);
    if(f1==f2){
        cout<<"\nf1 equal to f2";
    }
    else{
        cout<<"\nf1 and f2 are unequal";
    }
    if(f1!=f4){
        cout<<"\nf1 not equal to f4";
    }
    else{
        cout<<"\nf1 and f4 are equal";
    }
    if(f2>=f3){
        cout<<"\nf2 greater than equal to f3";
    }
    else{
        cout<<"\nf2 smaller than f3";
    }
    if(f1<=f4){
        cout<<"\nf1 smaller than equal to f4";
    }
    else{
        cout<<"\nf1 greater than f4";
    }

    return 0;
}

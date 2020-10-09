#include <iostream>
using namespace std;
class invent2; //destination class
class invent1{ //source class
    int code;
    int items;
    float price;
public:
    invent1(int a,int b,int c){
        code=a;
        items=b;
        price=c;
    }
    void putdata(){
        cout<<"Code: "<<code<<"\n";
        cout<<"Items: "<<items<<"\n";
        cout<<"Price: "<<price<<"\n";
    }
    int getcode(){return code;}
    int getitems(){return items;}
    float getprice(){return price;}
    operator float(){return (items*price);}
    /*
    operator invent2(){    //invent1 to invent2
        invent2 temp;
        temp.code=code;
        temp.value=items*price;
        return temp;
    }
    */
};
class invent2{
    int code;
    float value;
public:
    invent2(){
        code=0;
        value=0;
    }
    invent2(int x,float y){ //constructor for initialization
        code=x;
        value=y;
    }
    void putdata(){
        cout<<"Code: "<<code<<"\n";
        cout<<"Value: "<<value<<"\n";
    }
    invent2(invent1 p){  //constructor for conversion
        code=p.getcode();
        value=p.getitems()*p.getprice();
    }                    //end of destination class
};
int main()
{
    invent1 s1(100,5,140.0);
    invent2 d1;
    float total_value;
    total_value=s1; //invent1 to float
    d1=s1;          //invent1 to invent2
    cout<<"Product details - invent1 type"<<"\n";
    s1.putdata();
    cout<<"\nStock value"<<"\n";
    cout<<"Value = "<<total_value<<"\n\n";
    cout<<"Product details - invent2 type"<<"\n";
    d1.putdata();

    return 0;
}

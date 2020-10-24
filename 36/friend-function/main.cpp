#include <iostream>

using namespace std;
class sample{
int a;int b;
public:
    void setdata(int x,int y){
    a=x;b=y;
    }
    friend float mean(sample tx);
};
float mean(sample tx){
return float(tx.a + tx.b)/(2.0);
}
int main()
{
    sample s1;
    s1.setdata(25,12);
    cout << "\n Mean is: " << mean(s1) << endl;
    return 0;
}

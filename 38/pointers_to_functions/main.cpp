#include <iostream>
using namespace std;
typedef void (*funptr)(int,int);
void add(int x,int y){
    cout<<x<<" + "<<y<<" = "<<x+y<<"\n";
}
void sub(int x,int y){
    cout<<x<<" - "<<y<<" = "<<x-y<<"\n";
}
int main()
{
    funptr ptr;
    ptr = &add;
    ptr(1,2);
    ptr = &sub;
    ptr(3,2);
    return 0;
}

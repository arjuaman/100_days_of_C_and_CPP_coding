#include <iostream>

using namespace std;

int main()
{
    void *gp;
    int *ip;
    gp=ip;

    void *ptr1;
    char *ptr2;
//    ptr2=ptr1;  //error
    ptr2=(char*)ptr1;
    return 0;
}

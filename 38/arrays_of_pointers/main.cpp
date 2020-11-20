#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
    int i=0;
    char *ptr[10]={
        "books",
        "television",
        "computer",
        "sports"
    };

    char str[25];

    cout<<"\nEnter your leisure pursuit: ";
    cin>>str;

    for(i=0;i<4;i++){
        if(!strcmp(str,ptr[i])){
            cout<<"\n\nYour favorite pursuit is present\n";
            break;
        }
    }
    if(i==4)
        cout<<"\nYour fav pursuit not available";

    return 0;
}

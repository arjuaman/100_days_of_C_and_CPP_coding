#include <iostream>
using namespace std;
//enum keyword automatically enumerates a list of words by assigning them values 0,1,2 and so on
enum shape{circle,square,triangle};
enum colour{red,blue,green,yellow};
enum position{OFF,ON};
colour background;
//shape circle;

//we can also create anonymous enums
enum{off,on}; //here off=0 and on=1
int switch1=off;
int switch2=on;

int main()
{
    cout<<switch1<<endl;
    shape ellipse;
    cout << sizeof(ellipse) << endl;
    cout << sizeof(position) << endl;
    //colour background = blue;
    //cout << background << endl;
//    colour background = 7;              error
//    cout << background << endl;
    colour background = (colour)7;
    cout << background << endl;

    //we can override the default values by explicitly assigning integer values to enumerators
    enum colour{red,blue=6,green=8};
//    enum colour{red=5,blue,green};
    cout << colour(blue);


    return 0;
}

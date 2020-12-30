// SYNTAX OF THROW IS SAME AS THAT OF RETURN
#include <iostream>
using namespace std;
void divide(int x,int y,int z){
    cout<<"\nWe are inside the function. \n";
    if((x-y)!=0){
        int R=z/(x-y);
        cout<<"\nResult = "<<R<<"\n";
    }
    else{
        throw(x-y);
        //trying
        //throw;
    }
}
int main()
{
    try{
        cout<<"\nWe are inside the try block. \n";
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int){
        cout<<"\nCaught the exception\n";
    }
    return 0;
}

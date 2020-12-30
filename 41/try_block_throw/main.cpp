/*  when try block throws an exception, the program leaves the try block and enters the catch statement of catch block.
if type of object thrown matches the arg type in the catch statement, then catch block is executed for handling the
exception. If they don't match, the program is aborted with the help of abort() function which is invoked by default.
When no exception is detected and thrown, the control goes to the statement immediately after catch block, i.e. catch block is skipped.
*/
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter values of a and b \n";
    cin>>a>>b;
    int x=a-b;
    try{
        if(x!=0){
            cout<<"\nResult (a/x) = "<<a/x<<"\n";
        }
        else{
            throw(x);
        }
    }
    catch(int i){
        cout<<"\nException caught: DIVIDE BY ZERO\n";
    }

    return 0;
}

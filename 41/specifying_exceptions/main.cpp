/* type function(Arg-list) throw (type-list) = the type-list specifies the type of exceptions that may be thrown.
throwing any other type of exception may lead to program termination. If we wish to prevent a function from throwing any exception,
make the type-list empty, i.e. throw();
*/

#include <iostream>
using namespace std;
void test(int x) throw(int,double){
    if(x == 0) throw 'x';
    else if(x == 1) throw x;
    else if(x == -1) throw 1.0;
    cout<<"End of function block \n";
}
int main()
{
    try{
        cout<<"x == 0 \n";test(0);
        cout<<"x == 1 \n";test(1);
        cout<<"x == -1 \n";test(-1);
        cout<<"x == 2 \n";test(2);
    }
    catch(char c){
        cout<<"Caught a character \n";
    }
    catch(int m){
        cout<<"Caught an integer \n";
    }
    catch(double d){
        cout<<"Caught a double \n";
    }
    cout<<"End of try-catch system \n\n";
    return 0;
}

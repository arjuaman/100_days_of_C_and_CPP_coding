#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class binary{
   string s;
   public:
       void read(void){
           cout<<"Enter a binary number: ";
           cin>>s;
           cout<<endl;
       }
       void chk_bin(void){
           for(int i=0;i<s.length();i++){
               if (s.at(i)!='0' && s.at(i)!='1'){
                    cout<<"The number you entered is not binary,the program will quit.";
                    exit(0);
               }
           }
       }
       void ones(void){
            chk_bin();
            for(int i=0;i<s.length();i++){
                if (s.at(i)=='0')
                    s.at(i)='1';
                else
                    s.at(i)='0';
           }
       }
       void displayones(void){
           ones();
           cout<<"\nThe 1's compliment of above binary number is: "<<s;
       }
};
int main()
{
    binary b;
    b.read();
    b.displayones();
//    cout << "Hello world!" << endl;
    return 0;
}

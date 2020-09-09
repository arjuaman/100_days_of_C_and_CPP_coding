#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2;
    cout << "Enter the first string: ";
    //cin>>s1;
    getline(cin,s1);
    cout << "\nEnter the second string: ";
    //cin>>s2;
    getline(cin,s2);
    if(s1.length()>s2.length()){
        cout<<"\nString 1 is longer.";
    }
    else if(s1.length()<s2.length()){
        cout<<"\nString 2 is longer.";
    }
    else{
        cout<<"\nStrings are equal sized.";
    }
    return 0;
}

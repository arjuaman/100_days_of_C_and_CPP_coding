#include <iostream>

using namespace std;

int main()
{
    int answer=7;
    int num;
    cout << "Enter a guess,or -1 if you're bored: ";
    cin>>num;
    while(num!= -1){
    if(num==answer){
        cout<<"\nBingo!Right answer";
        break;
    }
    else if(num>answer){
        cout<<"\nYour guess is too high.";
    }
    else if(num<answer){
        cout<<"\nYour guess is too low.";
    }
    cout << "\nEnter a guess,or -1 if you're bored: ";
    cin>>num;
    }
    return 0;
}

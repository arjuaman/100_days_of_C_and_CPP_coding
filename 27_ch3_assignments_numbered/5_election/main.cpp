#include <iostream>

using namespace std;

int main()
{
    int spoilt=0,i=0,m=1,input,num,*countx,c1=0,c2=0,c3=0,c4=0,c5=0;
    cout<<"enter the number of voters: ";
    cin>>num;
    countx = new int[num];
    cout<<"\n Enter 1 to 5 for voting for candidates number 1 to 5. ";
    while(i != num){
        cin>>input;
        switch(input){
        case 1:c1++; break;
        case 2:c2++; break;
        case 3:c3++; break;
        case 4:c4++; break;
        case 5:c5++; break;
        default:spoilt++;break;
        }
        countx[i] = input;
        i++;
        countx++;
        cout<<"\n Enter 1 to 5 for voting for candidates number 1 to 5. ";
    }
    cout<<"\nVotes for candidate 1: "<<c1;
    cout<<"\nVotes for candidate 2: "<<c2;
    cout<<"\nVotes for candidate 3: "<<c3;
    cout<<"\nVotes for candidate 4: "<<c4;
    cout<<"\nVotes for candidate 5: "<<c5;
    cout<<"\nSpoilt votes: "<<spoilt<<"\n";
    for(i=0;i<num;i++){
        cout<<countx[i];
        delete[] countx;
    }
    //delete countx;
    return 0;
}

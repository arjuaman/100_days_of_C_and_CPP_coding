#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    char name[30];
    int n,i,units;
    float fixed=50,sum;
    cout << "Enter the number of users: " << endl;
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"User no."<<i+1<<"\n";
        cin>>name;
        cout<<"Enter the number of units consumed: ";
        cin>>units;
        if(units>300){
            sum = (units-300)*(0.90)+(200)*(0.80)+(100)*(0.60);
            sum +=50;
        }
        else if(units>100){
            sum = (units-100)*(0.80)+100*(0.60);
            sum +=50;
        }
        else{
            sum = units*(0.60);
            sum +=50;
        }
        if(sum>300){
            sum = sum + sum*(0.15);
        }

        cout<<"\nUser Name: "<<name<<"\nUnits Consumed: "<<units<<"\nAmount to pay: "<<sum;
    }
    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float n,i,j,stdev,sum=0,eqn,count1=0;
    cout << "Enter the total numbers: " << endl;
    cin>>n;
    float avg,temp,var;
    for(i=1;i<=n;i++){
        sum += i;
    }
    avg=sum/n;
    for(i=1;i<=n;i++){
        temp += pow((i-avg),2);
    }
    var = (1/n)*temp;
    cout<<"\n Variance is: "<<var<<endl;
    cout<<"Standard Deviation is: "<<sqrt(var)<<endl;
    return 0;
}

#include <iostream>
#include "greatest.h"
using namespace std;
inline greatest123(int a,int b,int c){
    int great;
    great = (a>b)?(a>c?a:c):(b>c?b:c);
	return great;
}
int main()
{
    int a,b,c;
    cout << "Enter the three numbers: " << endl;
    cin>>a>>b>>c;
    int great = greatest(a,b,c);
    int great_using_inline = greatest123(a,b,c);
    cout<<"\n"<<great<<"\t"<<great_using_inline;
    return 0;
}

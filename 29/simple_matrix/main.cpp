#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int m,n,mat[3][3];
    //vector<int>row;
    //vector<int>col;
    cout << "Enter the no. of rows and columns of matrix: ";
    cin>>m>>n;
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"  ";
            cin>>mat[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<< "  ";
            cout<<mat[i][j];
        }
        cout<<endl;
    }

    return 0;
}

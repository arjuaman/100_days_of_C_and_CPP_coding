#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
void readmatrix(int mat[3][3],int n,int m=3){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"  ";
            cin>>mat[i][j];
        }
        cout<<endl;
    }
}
void displaymatrix(int mat[3][3],int n,int m=3){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<< "  ";
            cout<<mat[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    int col,mat[3][3];
    //vector<int>row;
    //vector<int>col;
    cout << "Enter the no. of columns of matrix: ";
    cin>>col;
    readmatrix(mat,col);
    cout<<endl;
    displaymatrix(mat,col);
    cout<<endl;
    return 0;
}

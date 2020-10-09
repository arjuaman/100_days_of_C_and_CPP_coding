#include <iostream>
#include <math.h>
//int value;
using namespace std;
class mat{
    int row;
    int col;
    int **a;
public:
    mat(){}
    mat(int m,int n){
        row=m;
        col=n;
        a = new int*[row];
        for(int i=0;i<row;i++){
            a[i]=new int[col];
        }
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++){
            cin>>a[i][j];
    }

    }
    //void getdata(int m,int n,int value){
    //    a[m][n]=value;
    //}
    void display(){
        for(int i=0;i<row;i++){
            cout<<"\n";
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<"\t";
        }
        }
    }
    mat operator+(mat x){
        mat temp;
        temp.row=row;
        temp.col=col;
        temp.a=new int*[temp.row];
        for(int i=0;i<temp.row;i++){
            temp.a[i]=new int[temp.col];
        }
        //int sum=0;
        for(int i=0;i<row;i++)
        for(int j=0;j<col;j++){
            temp.a[i][j]=a[i][j]+x.a[i][j];
        }
        return temp;
    }
    mat operator-(mat x){
        mat temp1;
        temp1.row=row;
        temp1.col=col;
        temp1.a=new int*[temp1.row];
        for(int i=0;i<temp1.row;i++){
            temp1.a[i]=new int[temp1.col];
        }
        //int sum=0;
        for(int i=0;i<row;i++)
        for(int j=0;j<col;j++){
            temp1.a[i][j]=a[i][j]-x.a[i][j];
        }
        return temp1;
    }
    mat operator*(mat x){
        mat temp2;
        temp2.row=row;
        temp2.col=col;
        temp2.a=new int*[temp2.row];
        for(int i=0;i<temp2.row;i++)
            temp2.a[i]=new int[temp2.col];
        for(int i=0;i<temp2.row;i++)
        for(int j=0;j<temp2.col;j++){
            temp2.a[i][j]=0;
            for(int k=0;k<temp2.row;k++){
                temp2.a[i][j]+=a[i][k]*x.a[k][j];
            }
        }
        return temp2;
    }
};
int main()
{
    int m1,n1,m2,n2,value;
    mat mx,my,mz,ma,mb;
    cout<<"Enter the dimensions of the 1st matrix: \n";
    cin>>m1>>n1;
    mx=mat(m1,n1);
    cout<<"Enter the dimensions of the 2nd matrix: \n";
    cin>>m2>>n2;
    my=mat(m2,n2);

    mx.display();
    cout<<"\n";
    my.display();
    cout<<"\n";

    if(m1==m2 && n1==n2){
        cout<<"Addition and Subtraction possible here\nAddition: ";
        mz=mx+my;
        mz.display();
        cout<<"\nSubtraction: ";
        ma=mx-my;
        ma.display();
    }
    else{
        cout<<"Addition and Subtraction not possible here as dimensions don't agree\n";
    }
    if(n1==m2){
        cout<<"\nMultiplication is possible here\n";
        mb=mx*my;
        cout<<"\nMultiplication: ";
        mb.display();
    }
    else{
        cout<<"Multiplication not possible here as dimensions don't agree\n";
    }

    return 0;
}

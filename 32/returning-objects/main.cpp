#include <iostream>
#include <conio.h>
using namespace std;
class matrix{
int m[3][3];
public:
    void read(void){
        cout<<"\nEnter the elements of the 3*3 matrix: \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>m[i][j];
        }
    }
    }
    void display(void){
    cout<<"\nShow the elements of the 3*3 matrix: ";
    for(int i=0;i<3;i++){
            cout<<"\n";
        for(int j=0;j<3;j++){
            cout<<m[i][j]<<"\t";
        }
    }
    }
    friend matrix trans(matrix);
};
matrix trans(matrix m1){
//matrix m2;
int i,j;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        m1.m[i][j]=m1.m[j][i];
    }
}
return (m1);
}
int main()
{
    matrix mat1,mat2;
    mat1.read();
    mat1.display();
    mat2=trans(mat1);
    mat2.display();
    //cout << "Hello world!" << endl;
    return 0;
}

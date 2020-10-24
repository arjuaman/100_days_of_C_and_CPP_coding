#include <iostream>
using namespace std;
class matrix{
    int arr[2][2];
public:
    void setdata(){
        for(int i=0;i<2;i++){
                for(int j=0;j<2;j++)
                    cin>>arr[i][j];
        }
    }
    void showdata(){
        cout<<"\n";
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
                cout<<arr[i][j]<<"\t";
                cout<<"\n";
        }
    }
    friend matrix mul(matrix,matrix);
};
matrix mul(matrix m1,matrix m2){
    matrix m3;
    int mul[2][2];
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            m3.arr[i][j]=0;
            for(int k=0;k<2;k++){
                m3.arr[i][j]+=m1.arr[i][k]*m2.arr[k][j];
            }
        }
    }
    return m3;
}
int main()
{
    matrix m1,m2,res;
    m1.setdata();
    m1.showdata();
    m2.setdata();
    m2.showdata();
    res = mul(m1,m2);
    res.showdata();
    return 0;
}

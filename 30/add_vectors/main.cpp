#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class vect{
    vector<float> fs;
    vector<float> fd;
    int size;
    float num;
    int pos;
public:
    void create(){
        cout<<"\nEnter the size of the vectors: ";
        cin>>size;
        for(int i=0;i<size;i++){
            cout<<"\nENter the content of vector 1: ";
            cin>>num;
            fs.push_back(num);
        }
        for(int i=0;i<size;i++){
            cout<<"\nENter the content of vector 2: ";
            cin>>num;
            fd.push_back(num);
        }
    }
    void modify(){
        cout<<"\nEnter the position at which you want to alter the value,or -1 if you don't want to: ";
        cin>>pos;
        if(pos!= -1){
        for(int i=0;i<size;i++){
            if(i==pos){
                cout<<"\nEnter the new value: ";
                cin>>num;
                fs[i]=num;
                break;
            }
        }}
        }
    void multiply(){
        cout<<"\nEnter the value by which you want to multiply: ";
        cin>>num;
        for(int i=0;i<size;i++){
            fs[i]=fs[i]*num;
        }
        cout<<"\n";
    }
    void display(){
        for(auto item:fs){
            cout<<item<<endl;
        }
        cout<<"\n";
        for(auto item:fd){
            cout<<item<<endl;
        }
    }
    void add(){
    //vector<float> res;
    std::transform (fs.begin(), fs.end(), fd.begin(), fs.begin(), std::plus<float>());
    //std::transform(result.begin(), result.end(), result_temp.begin(),
    //           result.begin(), std::plus<double>());
    for(auto item:fs){
            cout<<item<<endl;
        }
    }
};

int main()
{
    vect group;
    group.create();
    group.modify();
    group.multiply();
    group.display();
    group.add();
    return 0;
}

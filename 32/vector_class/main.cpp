#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class vect{
    vector<float> fs;
    int size;
    float num;
    int pos;
public:
    void create(){
        cout<<"\nEnter the size of the vector: ";
        cin>>size;
        for(int i=0;i<size;i++){
            cout<<"\nENter the content: ";
            cin>>num;
            fs.push_back(num);
        }
    }
    void modify(){
        cout<<"\nEnter the position at which you want to alter the value: ";
        cin>>pos;
        for(int i=0;i<size;i++){
            if(i==pos){
                cout<<"\nenter the new value: ";
                cin>>num;
                fs[i]=num;
                break;
            }
        }
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
    }
};

int main()
{
    vect group;
    group.create();
    group.modify();
    group.multiply();
    group.display();
    return 0;
}

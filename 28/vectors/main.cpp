#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// I ran on MinGw
int main()
{
    vector<int> vi;
    for(int i=0;i<10;i++){
        vi.push_back(i);
    }
    cout<<"\nThe list of vectors is: ";
    for(auto item:vi){
        cout<<item<<" ";
    }
    cout<<endl;

    vector<string> vs;
    string s;
    for(int i=0;i<3;i++){
        cout<<"\nEnter a string: ";
        getline(cin,s);
        vs.push_back(s);
    }
    cout<<endl;
    for(auto item:vs){
        cout<<item<<endl;
    }

    vi[3]=-99;
    vi[8]=23;
    vi[1]=3;
    sort(begin(vi),end(vi));
    for(auto i=begin(vi);i!=end(vi);i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    return 0;
}

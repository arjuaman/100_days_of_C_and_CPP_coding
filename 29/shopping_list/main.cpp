#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class items{
    int itemcode[50];
    float itemprice[50];
    int count1;
public:
    void cnt(void){count1=0;}  //initialize count to 0
    void getitem(void);        //assign values to data members of items
    void displaysum(void);     //display total value of all items
    void remove1(void);        //delete a specified item
    void displayitems(void);   //displaying items
};
void items::getitem(void){
    cout<<"\nEnter the item code: ";
    cin>>itemcode[count1];
    cout<<"\nEnter the item price: ";
    cin>>itemprice[count1];
    count1++;
}
void items::displaysum(void){
    cout<<"\nTotal no. of items in cart is: "<<count1;
    float sum=0;
    for(int i=0;i<count1;i++){
        sum += itemprice[i] ;
    }
    cout<<"\nSum of items in cart is: "<<sum;
}
void items::displayitems(void){
    for(int j=0;j<count1;j++){
        cout<<"\n"<<itemcode[j];
        cout<<" "<<itemprice[j];
    }
}
void items::remove1(void){
    if(count1>0){
        int sea,temp;
        cout<<"\nEnter the item code of item you want to delete: ";
        cin>>sea;
        for (int k=0;k<count1-1;k++){
            if (itemcode[k]==sea){
                    itemprice[k]=0;
            }
        }
    }
    else{
        cout<<"\nThere are no items to remove";
    }
}

int main()
{
    items obj1;
    obj1.cnt();
    int x;
    do{
        cout<<"\nEnter what you want to do: ";
        cout<<"\n1.Add an item \n2.Display total value \n3.Delete an item \n4.Display all items \n5.Quit \n";
        cin>>x;
        switch(x){
    case 1: obj1.getitem();break;
    case 2: obj1.displaysum();break;
    case 3: obj1.remove1();break;
    case 4: obj1.displayitems();break;
    case 5: break;
    default: cout<<"\nError in output. Try again.";
        }
    }while(x!=5);

    return 0;
}

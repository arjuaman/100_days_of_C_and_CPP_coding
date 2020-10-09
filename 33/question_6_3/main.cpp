#include <iostream>
#include <cstring>
using namespace std;
class book{
    char *author;
    char *title;
    float cost;int alength,tlength,plength;
    char *publisher;
    int stock;int copies;
public:
    book(){
        alength=tlength=plength=0;
        stock=0;
        copies=0;
        cost=0.0;
        author=new char[alength+1];
        title=new char[tlength+1];
        //publisher=new char[length+1];
    }
    book(char *t,char *a,int stk){
        alength=strlen(a);
        tlength=strlen(t);
        author=new char[alength+1];
        title=new char[tlength+1];
        strcpy(author,a);
        strcpy(title,t);
        stock=stk;
    }
    void display(void){
        cout<<"Book name is: "<<title<<" and author is: "<<author<<" and there are "<<stock<<" copies available";
    }

    book(char *t,char *a){
        alength=strlen(a);
        tlength=strlen(t);
        author=new char[alength+1];
        title=new char[tlength+1];
        strcpy(author,a);
        strcpy(title,t);
        void check(book &t,book &a);
    }
    void check(book &name,book &auth){
        int cop;
        cout<<"\nEnter the number of copies you want";
        cin>>cop;
    if(name.stock<0){
        cout<<"\nNot available.";
    }
    else{
        cout<<"\nHow many copies you want?";
        cin>>cop;
        if(cop>name.stock){
            cout<<"\nThat many copies not available.";
        }
        else{
            cout<<"\nAvailable!";
            name.stock-=cop;
            cout<<"\nCopies remaining of "<<name.title <<" are "<<name.stock;
        }
    }
   // return 1;
    }
};


int main()
{
    book b1("The tales of nokdu","Korean",50);
    book b2("Panchtantra","Random Indian Dude",25);
    book b3("OOPs","Balaguruswamy",69);
    book b4("AI ML","Elon Musk",420);

    string bname,bauth;int cop;
    char *first = "The tales of nokdu";
    char *second="Korean";

    cout<<"Enter the book name and author and copies you want: ";

    book c1(first,second);
    //c1.display();
    return 0;
}

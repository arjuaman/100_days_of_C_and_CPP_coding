#include <stdio.h>
#include <stdlib.h>
void read(int *arr,int n);
void display(int *arr,int n);
void smallest(int *arr,int n,int *p,int *s);
//read,print and find smallest number using pointers,arrays,functions
int main()
{
    int i,n,small,pos,num[20];
    //int *pn=&n;int *parr=arr;
    printf("\n enter the quantity: ");
    scanf("%d",&n);
    printf("\n enter the elements");
    read(num,n);
    display(num,n);
    smallest(num,n,&pos,&small);
    printf("\nThe smallest number is %d at %d. ",small,pos);

    return 0;
}
void read(int *arr,int n){
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
}
void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf(" %d ",*(arr+i));
    }
}
void smallest(int *arr,int n,int *p,int *s){
    int small=99999999;
    *s=&small;
    for(int i=0;i<n;i++){
        if( *(arr+i) < *s){
            *s= *(arr+i);
            *p=i;
        }
    }
}

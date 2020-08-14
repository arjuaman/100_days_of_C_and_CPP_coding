#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    char names[20][30],sorted[20][30],temp[20];
    printf("\nEnter the number of students: ");
    scanf("%d",&n);
    n=n+1;
    for(int i=0;i<n;i++){
        gets(names[i]);
    }
    printf("\nSorted names of students are: ");
    for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(strcmp(names[j],names[j+1])>0){
                         strcpy(temp,names[j]);
                         strcpy(names[j],names[j+1]);
                         strcpy(names[j+1],temp);
                }
            }
    }
    for(int i=0;i<n;i++){
        puts(names[i]);
    }
    return 0;
}

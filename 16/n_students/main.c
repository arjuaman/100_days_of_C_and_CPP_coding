#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char stud[20][30];
    printf("\nEnter the number of students: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        gets(stud[i]);
    }
    printf("\nNames of students are: ");
    for(int i=0;i<=n;i++){
        puts(stud[i]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,k,count=0,temp;
    char str[50];
    printf("\nEnter the sentence: ");
    do{
        scanf("%c",&str[i]);
        i=i+1;
    }while(str[i-1]!='\n');
    str[i]='\0';
    while(str[j]!='\0'){
            if(str[j]==' ' && str[j+1]!=' '){
        count++;
        j++;
    }}
    printf("\n");
    puts(str);
    //for(j=0;j!='\0';j++){
    //    printf("%c",str[j]);
    //}
    printf("\nThe number of words are: %d ",count);
    return 0;
}

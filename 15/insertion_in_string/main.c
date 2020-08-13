#include <stdio.h>
#include <stdlib.h>
//insert(text,position,string)
int main()
{
    int i=0,pos,num,var=0;
    char strmain[100],temp[100],str[25];
    printf("Enter the main text: ");
    gets(strmain);
    printf("\nEnter the string to be inserted: ");
    gets(str);
    printf("\nEnter the position of the new text: ");
    scanf("%d",&pos);
    printf("\n");
    num=pos;
    while(strmain[i]!='\0'){
        i++;
    }
    num=0;
    printf("\nLength of string is: %d",i);
    printf("\n");
    for(int j=0;strmain[j]!='\0';j++){
        //temp[j]=strmain[j];
        if(j==pos){
                temp[num]=" ";++num;
            for(int k=0;str[k]!='\0';k++){
                temp[num]=str[k];
                num++;
            }
        }

        temp[num]=strmain[j];
        num++;
    }
    puts(strmain);
    puts(str);
    printf("\nPosition was %d",pos);
    printf("\n\n");
    puts(temp);
    return 0;
}

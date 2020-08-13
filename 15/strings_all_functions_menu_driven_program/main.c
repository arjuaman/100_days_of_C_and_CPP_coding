#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char insertion(char super[40],char sub[20],int pos);
char deletion(char super[40],int pos,int len);
int indexing(char super[40],char sub[20]);
char replacement(char super[40],char sub[20],char var[20]);
int main()
{
    int i,j,k,choice,pos,num,len,output;
    char str[20];char text[40],msg[20],temp[40],var[20],result[40];
    printf("--------------String Operations---------------");
    printf("\nEnter your choice: ");
    printf("\n 1.Insert in a string\n 3.Deleting from string \n 2.Indexing \n 4.Replacement\n 5.Exit");
    scanf("%d",&choice);printf("\n");
    switch(choice){
        case 1: {printf("\n");
                printf("\nEnter the new string: ");
                gets(str);
                printf("\nEnter the main text: ");
                gets(text);
                printf("\nEnter the position of the new string: ");
                scanf("%d",&pos);
                //result=insertion(text,str,pos);
                puts(insertion(text,str,pos));}
                break;
        case 2: printf("\nEnter the main text: ");
                gets(text);
                printf("\nEnter the string whose position is to be found: ");
                gets(str);
                output=indexing(text,str);
                if(output!= (-1))
                    printf("Position is %d",output);
                else
                    printf("Not found");
                break;
        case 3: printf("\nEnter the main text: ");
                gets(text);
                printf("\nEnter the position from where to delete: ");
                scanf("%d",&pos);
                printf("\nEnter the length of how much to delete: ");
                scanf("%d",&len);
                //result=deletion(text,pos,len);
                puts(deletion(text,pos,len));
                break;
        case 4: printf("\nEnter the main text: ");
                gets(text);
                printf("\nEnter the part of the text to be replaced: ");
                gets(str);
                printf("\n Enter the part to be put instead: ");
                gets(var);
                //result=replacement(text,str,var);
                puts(replacement(text,str,var));
                break;
        case 5: exit(0);
    }
    return 0;
}

char insertion(char super[40],char sub[20],int pos){
    puts(super);
    puts(sub);
    int i=0,j=0,k=0,var1,var2,x=pos;
    char temp[40];
    while(super[j]!='\0'){
        j++; //length of super
    }
    while(i != pos){
        temp[i]=super[i];
        ++i; //length of temp
    }
    k=i;
    puts(temp); var1=0;
    while(sub[var1]!='\0'){
        temp[k]=sub[var1];
        ++var1;++k;
    }
    puts(temp);
    while(super[i]!='\0'){
        temp[k]=super[i];
        ++i;++k;
    }
    temp[k]='\0';
    return(temp);
}

char deletion(char super[40],int pos,int len){
    int i=0,j=0;
    while(super[i]!='\0'){
        if(i==pos){
            j=i;
            while(super[j]!='\0')
                super[j]=super[j+len];
        break;
        }
        i++;
    }
    return(super);
}
int indexing(char super[40],char sub[20]){
    int len1,len2;
    len1=strlen(super);
    len2=strlen(sub);
    int i=0,j=0,k=0,flag,temp,var;char dummy[40];
    while(super[i]!='\0'){
    while(super[i]!=sub[0]&&super[i]!='\0'){
        i++;
    }
    flag=i;
    while(super[i]==sub[j] && super[i]!='\0' && sub[j]!='\0'){
        i++;j++;
    }
    if(sub[j]=='\0')
        return flag;
    if(super[i]=='\0')
        return -1;
    i=flag+1;
    j=0;
    }

}
char replacement(char super[40],char sub[20],char var[20]){
    int i,j,k,pos,temp;
    char loc[40],hero[20];
    int len1,len2;
    len1=strlen(sub);
    pos=indexing(super,sub);
    super=deletion(super,pos,len1);
    //loc=insertion(super,var,pos);
    return insertion(super,var,pos);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void read_str(char *my_str);
void display_str(char *my_str);
void merge_str(char *my_str1,char *my_str2,char *my_str3);
void copy(char my_str1[],int m,int n);
int cal_len(char my_str[]);
void count(char my_str[]);
void count_wlc(char my_str[]);
void replace_str(char *my_str);

int main()
{
    char str1[100],str2[100],merged_str[200],copy_str[100];
    int option,m,n,length=0;
    do{
        printf("\n1.Enter the string");
        printf("\n2.Display the string");
        printf("\n3.Merge two strings");
        printf("\n4.Copy n characters from mth position");
        printf("\n5.Calculate length of the string");
        printf("\n6.Count the number of upper case,lower case,numbers,and special characters");
        printf("\n7.Count the number of words,lines and characters");
        printf("\n8.REPLACE WITH ; ");
        printf("\n9.EXIT");
        printf("\n\nEnter your option: ");
        scanf("%d",&option);
        switch(option){
    case 1:
        fflush(stdin);
        read_str(str1);
        break;
    case 2:
        display_str(str1);
        break;
    case 3:
        read_str(str2);
        merge_str(str1,str2,merged_str);break;
    case 4:
        printf("\nEnter the position from where to copy the text: ");
        scanf("%d",&m);
        printf("\nEnter the number of characters to be copied: ");
        scanf("%d",&n);
        copy(str1,m,n);
        break;
    case 5:
        length=cal_len(str1);
        printf("\nThe length of the string is %d",length);break;
    case 6:
        count(str1);break;
    case 7:
        count_wlc(str1);break;
    case 8:
        replace_str(str1);break;
        }
    }while(option !=9);
    return 0;
}
void read_str(char *my_str){
    fflush(stdin);
    printf("\nEnter the string: ");
    gets(my_str);
}
void display_str(char *my_str){
    int i=0;
    printf("\nThe string is: ");
    while(*my_str != '\0'){
        printf(" %c ",*my_str);
        my_str++;
    }
}
void merge_str(char *my_str1,char *my_str2,char *my_str3){
    strcpy(my_str3,my_str1);
    strcat(my_str3,my_str2);
    display_str(my_str3);
}
void copy(char my_str1[],int m,int n){
    int i=0;
    char *ptr;
    ptr=my_str1;
    char copy_str[50],*pcpy;
    pcpy=copy_str;
    ptr=ptr+m;
    printf("\nThe copied string is: ");
    while(*ptr!='\0' && i<n){
       *pcpy=*ptr;
       i++;ptr++;pcpy++;
    }
    *pcpy='\0';
    puts(copy_str);
}
int cal_len(char my_str[]){
    return strlen(my_str);
}
void count(char my_str[]){
//Count the number of upper case,lower case,numbers,and special characters.
    int i=0,cupper=0,clower=0,cnum=0,cspec=0;
    while(my_str[i]!='\0'){
            if(my_str[i] >= 'a' && my_str[i]<='z'){
                clower++;
            }
            else if(my_str[i] >= 'A' && my_str[i]<='Z'){
                cupper++;
            }
            else if(my_str[i] >= '0' && my_str[i]<= '9'){
                cnum++;
            }
            else{
                cspec++;
            }
            i++;
    }
    printf("\n The number of lowercase characters is: %d ",clower);
    printf("\n The number of uppercase characters is: %d ",cupper);
    printf("\n The number of numerical characters is: %d ",cnum);
    printf("\n The number of special characters is: %d ",cspec);
}
void count_wlc(char my_str[]){
//Count the number of words,lines and characters
    int i=0,lines=1,words=1;
    while(my_str[i]!='\0'){
        if(my_str[i]==' ' && my_str[i+1]!=' '){
            words++;
        }
        if(my_str[i]=='\n'){
            lines++;
        }
        i++;
    }
    printf("\n The number of lines is: %d ",lines);
    printf("\n The number of words is: %d ",words);
    printf("\n The number of characters is: %d ",i);
}
void replace_str(char *my_str){
//REPLACE WITH
int i=0;
while(my_str[i] !='\0'){
    if(my_str[i] == ',')
        my_str[i]=';';
    i++;
}
puts(my_str);
}

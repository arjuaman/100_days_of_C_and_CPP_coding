#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//there is a library function strcmp(s1,s2) that compares s1 and s2, in #include <string.h>
int main()
{
    char str1[50],str2[50],res[100];
    int i=0,j=0,k,temp,len1,len2;
    printf("ENTER STRING 1: ");
    gets(str1);
    printf("ENTER STRING 2: ");
    gets(str2);
    len1=strlen(str1);//printf("%d",len1);
    len2=strlen(str2);
    if(len1!=len2){
        printf("\nString aren't equal");
        exit(0);
    }
    if(len1==len2){
        while(i<len1){
            if(str1[i]!=str2[j]){
                    temp=1;
                    break;
            }
            i++;j++;
        }
    }
    if(temp==1)
        printf("\nStrings aren't equal.");
    else
        printf("\nStrings are equal.");

    return 0;
}

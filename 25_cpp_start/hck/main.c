#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *pnum,num[1000];
    int freq[10]={0};
    int i=0,j=0;
    pnum=num;
    //num=(char*)malloc(sizeof(char));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    gets(pnum);
    while(*pnum != '\0'){
        if (*pnum == '0'){
            (freq[0])++;
        }
        if (*pnum == '1'){
            freq[1]++;
        }
        if (*pnum == '2'){
            freq[2]++;
        }
        if (*pnum == '3'){
            freq[3]++;
        }
        if (*pnum == '4'){
            freq[4]++;
        }
        if (*pnum == '5'){
            freq[5]++;
        }
        if (*pnum == '6'){
            freq[6]++;
        }
        if (*pnum == '7'){
            freq[7]++;
        }
        if (*pnum == '8'){
            freq[8]++;
        }
        if (*pnum == '9'){
            freq[9]++;
        }
        pnum++;
    }
    //freq[5]++;
    for(i=0;i<10;i++){
        printf("%d ",freq[i]);
    }
    return 0;
}

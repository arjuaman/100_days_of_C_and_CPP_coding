#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *num;
    int freq[10]={0};
    int i=0,j=0;
    num=(char*)malloc(sizeof(char));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    gets(num);
    while(*num != '\0'){
        if (*num == '0'){
            (freq[0])++;
        }
        if (*num == '1'){
            freq[1]++;
        }
        if (*num == '2'){
            freq[2]++;
        }
        if (*num == '3'){
            freq[3]++;
        }
        if (*num == '4'){
            freq[4]++;
        }
        if (*num == '5'){
            freq[5]++;
        }
        if (*num == '6'){
            freq[6]++;
        }
        if (*num == '7'){
            freq[7]++;
        }
        if (*num == '8'){
            freq[8]++;
        }
        if (*num == '9'){
            freq[9]++;
        }
        num++;
    }
    //freq[5]++;
    for(i=0;i<10;i++){
        printf("%d ",freq[i]);
    }
    return 0;
}

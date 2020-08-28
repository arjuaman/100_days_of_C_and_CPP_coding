#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1;//,*fp2;
    fp1=freopen("test.dat","w",stdout);
    printf("Hello world");
    //fputc('A',fp1);
    //fputc('B',fp2);
    //fclose(fp2);
    fprintf(fp1,"wertyuiop");
    fclose(fp1);
    return 0;
}

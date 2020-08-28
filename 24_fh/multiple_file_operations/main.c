#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    ptr=fopen("values.dat","w+");
    if(ptr==NULL){
        printf("\nFailed to read from file. Write the correct name of file. ");
        exit(0);
    }
    for(int i=1;i<257;i*=2){
        fprintf(ptr,"%d\n",i);
    }
    fflush(stdin);
    fclose(ptr);
    FILE *fp;
    if((fp=fopen("values.dat","r+"))==NULL){
        printf("\nFailed to read from file. ");
        exit(1);
    }
    int sum=0,count=0,val,j;float avg;
    while(!feof(fp)){
        fscanf(fp,"%d",&val);
        sum=sum+val;
        count++;
    }
    avg=(sum/count);
    fclose(fp);
    FILE *fout;
    fout=fopen("average.res","w+");
    if(fout==NULL){
        printf("\nFailed to read from file. Write the correct name of file. ");
        exit(0);
    }
    fprintf(fout,"%f",avg);
    //fclose(fp);
    fclose(fout);
   // fclose(ptr);
    return 0;
}

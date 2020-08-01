#include <stdio.h>

void main()
     {
     int num, i, j,temp, binno=0,dummyn;

     printf("\n\nConvert Decimal to Binary:\n ");
     printf("-------------------------\n");

     printf("Enter a number to convert : ");
     scanf("%d",&num);

     dummyn=num;
     i=1;

      for(j=num;j>0;j=j/2)
       {
        temp=num%2;
        binno=binno+temp*i;
        i=i*10;
        num=num/2;
       }

     printf("\nThe Binary of %d is %d.\n\n",dummyn,binno);
 }

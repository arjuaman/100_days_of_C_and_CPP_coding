#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Size of int is %d \n",sizeof(int));
    printf("Size of long int is %d \n",sizeof(long int));
    printf("Size of unsigned int is %d \n",sizeof(unsigned int));
    printf("Size of signed int is %d \n",sizeof(signed int));
    printf("Size of short int is %d \n",sizeof(short int));

    printf("Size of char is %d \n",sizeof(char));
    printf("Size of signed char is %d \n",sizeof(signed char));
    printf("Size of unsigned char is %d \n",sizeof(unsigned char));

    printf("Size of float is %d \n",sizeof(float));
    printf("Size of double is %d \n",sizeof(double));
    return 0;
}

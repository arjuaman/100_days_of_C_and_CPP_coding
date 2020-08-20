#include <stdio.h>
#include <stdlib.h>
float (*func)(float,float);
float add(float,float);
// int (*fp)(int) = NULL; // function pointer declared and initialized to NULL
float sub(float,float);
int main()
{
    func=add;
    printf("\n Addition = %f",func(9.5,3.1));
    func=sub;
    printf("\n Subtraction = %f",func(9.5,3.1));
    return 0;
}
float add(float x,float y){
    return(x+y);
}
float sub(float x,float y){
    return(x-y);
}

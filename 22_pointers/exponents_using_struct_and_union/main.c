#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef union {
    float fexp;
    int nexp;
}nvals;

typedef struct{
    float x;
    char flag;
    nvals exp;
}values;

float power(values val);

int main(){
    values val;
    int i; float n,y; printf("\nProgram is of form y=x^n ");

    printf("\nEnter a value for x: ");
    scanf("%d",&val.x);
    printf("\nEnter a value for n: ");
    scanf("%d",&n);

    i=(int)n;
    val.flag=(i==n)?'i':'f';
    if(val.flag=='i')
        val.exp.nexp=i;
    else
        val.exp.fexp=n;

    if(val.flag=='f' && val.x <=0){
        printf("\nERROR - Can't raise a negative number to a floating point number\n");
    }
    else{
        y=power(val);
        printf("\ny = %.4f",y);
    }

    return 0;
}

float power(values val){
    int i;
    float y=val.x;
    if(val.flag=='i'){
        if(val.exp.nexp==0)
            y=1.0;
        else{
            for(i=1;i<abs(val.exp.nexp);++i){
                y = y* val.x;
            }
            if(val.exp.nexp<0)
                y = 1./y;
    }
}
    else{
            y = exp(val.exp.fexp * log(val.x));
    }
return(y);
}

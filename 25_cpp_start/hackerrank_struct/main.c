#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/

	float var,rem;
	int pos;
    int *p=malloc(n*sizeof(float));
    for (int i = 0; i < n; i++) {
		rem = (tr[i].a + tr[i].b + tr[i].c)/2.0;
        p[i]=(rem*(rem-tr[i].a)*(rem-tr[i].b)*(rem-tr[i].c));
	}
    for(int j=0;j<n;j++){
            pos=j;
        while(pos>0 && p[pos]<p[pos-1]){
            var=p[pos];
            p[pos]=p[pos-1];
            p[pos-1]=var;

            var=tr[pos].a;
            tr[pos].a=tr[pos-1].a;
            tr[pos-1].a=var;
            var=tr[pos].b;
            tr[pos].b=tr[pos-1].b;
            tr[pos-1].b=var;
            var=tr[pos].c;
            tr[pos].c=tr[pos-1].c;
            tr[pos-1].c=var;
            pos -= 1;
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}

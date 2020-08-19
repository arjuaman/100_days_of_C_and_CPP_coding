#include <stdio.h>
#include <stdlib.h>
char *day_of_week(int);
int main()
{
    int day_num;
    char *day;
    printf("\nEnter the day from 1 to 7: ");
    scanf("%d",&day_num);
    day=day_of_week(day_num);
    if(day)
        printf("%s",day);
    else
        printf("\n Invalid Day");
    return 0;
}
char *day_of_week(int d){
    char *week_day[7]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
    if(d>=1 || d<=7)
        return week_day[d-1];
    else
        return NULL;
}

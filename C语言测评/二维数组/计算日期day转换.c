#include <stdio.h>

int DayofYear(int year, int month, int day);
int dayTab[2][13] =
{
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

main()
{
    int year, month, day;
    printf("Please enter year, month, day:");
    scanf("%d,%d,%d", &year, &month, &day);
    printf("yearDay = %d\n",DayofYear(year, month, day));
}

int DayofYear(int year, int month, int day)
{
    int i, leap=1;
    if((year%4==0) && (year%100!=0)){
        leap = 0;
    }
    if(year%400==0){
      leap = 0;
    }

    for (i=0; i < month; i++)
    {
        day = day + dayTab[leap][i];
    }
    return day;
}

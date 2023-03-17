/*According to the Gregorian calendar, it was Monday on the
date 01/01/01. If any year is input through the keyboard write
a program to find out what is the day on 1st January of this
year*/
#include <stdio.h>

int main()
{
    int year, no_of_year;
    printf("Enter the year::\n");
    scanf("%d", &year);
    no_of_year = year - 2001;
    int leap_year = no_of_year / 4;
    int total_days = no_of_year * 365 + leap_year;
    if (total_days % 7 == 0)
    {
        printf("Monday");
    }
    else if (total_days % 7 == 1)
    {
        printf("Tuesday");
    }
    else if (total_days % 7 == 2)
    {
        printf("Wednesday");
    }
    else if (total_days % 7 == 3)
    {
        printf("Thuresday");
    }
    else if (total_days % 7 == 4)
    {
        printf("Firday");
    }
    else if (total_days % 7 == 5)
    {
        printf("Saturday");
    }
    else
    {
        printf("Sunday");
    }

    return 0;
}
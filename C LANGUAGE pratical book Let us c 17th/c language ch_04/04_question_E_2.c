/*Write a program using conditional operators to determine whether
a year entered through the keyboard is a leap year or not.*/
#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year::\n");
    scanf("%d", &year);
    year % 400 == 0 ? printf("Leap Year::") : (year % 100 == 0 ? printf("NOt leap year::") : (year % 4 == 0 ? printf("Leap year") : printf("Not a leap year")));

    return 0;
}
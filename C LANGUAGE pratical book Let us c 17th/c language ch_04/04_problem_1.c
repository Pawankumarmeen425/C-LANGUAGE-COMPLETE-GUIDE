/* Check weather a year is leap year or not */
#include <stdio.h>

int main()
{
    int year;
    printf("Enter year:\n");
    scanf("%d", &year);
    if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a leap year");
    }
    return 0;
}
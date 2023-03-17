/*Write a function that compares two given dates. To store a
date use a structure that contains three members namely day,
month and year. If the dates are equal the function should
return 0, otherwise it should return 1.*/
#include <stdio.h>

struct date1
{
    int day;
    int month;
    int year;
};
struct date2
{
    int day;
    int month;
    int year;
};
int comp_date(struct date1, struct date2);
int main()
{

    struct date1 d1;
    struct date2 d2;
    printf(":::Enter the first date deatils:::\n");
    printf("Day(dd):");
    scanf("%d", &d1.day);
    printf("Month(mm):");
    scanf("%d", &d1.month);
    printf("Year(dd):");
    scanf("%d", &d1.year);
    printf("First Date = %d/%d/%d\n", d1.day, d1.month, d1.year);
    printf(":::Enter the second date deatils:::\n");
    printf("Day(dd):");
    scanf("%d", &d2.day);
    printf("Month(mm):");
    scanf("%d", &d2.month);
    printf("Year(dd):");
    scanf("%d", &d2.year);
    printf("First Date = %d/%d/%d\n", d2.day, d2.month, d2.year);
    comp_date(d1, d2);
    if ((d1.day > 31 || d1.day < 1) || (d1.month > 12 || d1.month < 1) || (d1.year > 9999 || d1.year < 1000))
    {
        printf("First date is invilid!");
        goto end;
    }
    else if ((d2.day > 31 || d2.day < 1) || (d2.month > 12 || d2.month < 1) || (d2.year > 9999 || d2.year < 1000))
    {
        printf("Second date is invilid!");
        goto end;
    }
    int result = comp_date(d1, d2);
    if (result == 0)
    {
        printf("::Both dates are Equal::\n");
    }
    else
    {
        printf("::Both dates are not Equal::\n");
    }
    /* goto lebal should be in that function in which lebal declaire. Otherwise it's give error*/
end:
    return 0;
}
int comp_date(struct date1 x, struct date2 y)
{
    if ((x.day == y.day) && (x.month == y.month) && (x.year == y.year))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

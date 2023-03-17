/*Write a structer capable of storing date . Write a function to compare dates*/
#include <stdio.h>
typedef struct date
{
    int date;
    int month;
    int year;
} date;
void display(date d);
int datecamp(date d1, date d2);
int main()
{
    date d1, d2;
    printf("Enter the first date::\n");
    scanf("%d%d%d", &d1.date, &d1.month, &d1.year);
    printf("Enter the second date::\n");
    scanf("%d%d%d", &d2.date, &d2.month, &d2.year);
    display(d1);
    display(d2);
    int a = datecamp(d1, d2);
    printf("Date comparsion functin returns :: %d\n", a);
    if (a == 0)
    {
        printf("Both Date are Equal::\n");
    }
    else if (a == 1)
    {
        printf("First date is larger then second date::");
    }
    else
    {
        printf("First date is smaller then second date::");
    }

    return 0;
}
void display(date d)
{
    printf("The date is :: %d/%d/%d\n", d.date, d.month, d.year);
}
int datecamp(date d1, date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    else if (d1.year < d2.year)
    {
        return -1;
    }
    else if (d1.month > d2.month)
    {
        return 1;
    }
    else if (d1.month < d2.month)
    {
        return -1;
    }
    else if (d1.date > d2.date)
    {
        return 1;
    }
    else if (d1.date < d2.date)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

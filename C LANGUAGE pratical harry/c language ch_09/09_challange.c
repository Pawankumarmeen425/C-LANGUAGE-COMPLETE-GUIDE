/*Write a structer capable to store the timestamp*/
#include <stdio.h>
typedef struct timestamp
    {
        int year;
        int month;
        int date;
        int hours;
        int minute;
        int second;

    }timestamp;
void display(timestamp t);

int main()
{
    
    timestamp t;
    printf("Enter the deatils of timestamp::\n");
    printf("year:");
    scanf("%d", &t.year);
    printf("month:");
    scanf("%d", &t.month);
    printf("date:");
    scanf("%d", &t.date);
    printf("hours:");
    scanf("%d", &t.hours);
    printf("minute:");
    scanf("%d", &t.minute);
    printf("second:");
    scanf("%d", &t.second);
   display(t);
    return 0;
}
void display(timestamp t)
{
    printf("Entered timestamp is::\n");
    printf("%d-%d-%d %d:%d:%d",t.year,t.month,t.date,t.hours,t.minute,t.second);
}
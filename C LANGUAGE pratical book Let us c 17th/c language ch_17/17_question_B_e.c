/*There is a structure called employee that holds information like
employee code, name and date of joining. Write a program to
create an array of structures and enter some data into it. Then ask
the user to enter current date. Display the names of those
employees whose tenure is greater than equal to 3 years.*/
#include <stdio.h>
struct jo_date
{
    int date;
    int month;
    int year;
};

typedef struct employee
{
    int code;
    char name[30];
    struct jo_date d;

} emp;
typedef struct cu_date
{
    int date;
    int month;
    int year;
} c;
void name_acc_year(emp, c);
int main()
{
    emp e[100];
    c cd[100];
    int noe;
    printf("Enter number of employee::");
    scanf("%d", &noe);
    for (int i = 0; i < noe; i++)
    {
        printf("\n\n::Enetr deatils of %d employee::\n", i + 1);
        printf("Enter the employee code:");
        scanf("%d", &e[i].code);
        printf("Enter the employee name:");
        // NOTE: Before the gets always use fflush(stdin)
        fflush(stdin);
        gets(e[i].name);
        printf("Enter date of joining:\n");
        printf("date:");
        scanf("%d", &e[i].d.date);
        printf("month:");
        scanf("%d", &e[i].d.month);
        printf("year:");
        scanf("%d", &e[i].d.year);
        printf("Year of joining = %d/%d/%d\n", e[i].d.date, e[i].d.month, e[i].d.year);
        printf("Enter current date::\n");
        printf("date:");
        scanf("%d", &cd[i].date);
        printf("month:");
        scanf("%d", &cd[i].month);
        printf("year:");
        scanf("%d", &cd[i].year);
        printf("Current year = %d/%d/%d \n", cd[i].date, cd[i].month, cd[i].year);
        fflush(stdin);
    }
    printf("::Names of those employees whose tenure is greater than equal to 3 years::\n");
    for (int i = 0; i < noe; i++)
    {
        name_acc_year(e[i], cd[i]);
    }

    return 0;
}
void name_acc_year(emp x, c y)
{
    int result, n1, n2, n3;
    n1 = ((y.year) - (x.d.year));
    n2 = ((y.month) - (x.d.month));
    n3 = ((y.date) - (x.d.date));
    if (n1 > 3)
    {
        puts(x.name);
    }
    else if (n1 == 3)
    {
        if (n2 > 0)
        {
            puts(x.name);
        }
        else if (n2 == 0)
        {
            if (n3 >= 0)
            {
                puts(x.name);
            }
        }
    }
    else{
        printf("NO employee do works more then 3 year::\n");
    }
}
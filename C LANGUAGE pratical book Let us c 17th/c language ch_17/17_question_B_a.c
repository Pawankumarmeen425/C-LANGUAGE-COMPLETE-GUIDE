/*(a). Create a structure to specify data on students given below:
       Roll number, Name, Department, Course, Year of joining
       Assume that there are not more than 450 students in the college.
  (1). Write a function to print names of all students who joined in a
     particular year.
  (2). Write a function to print the data of a student whose roll
     number is received by the function.*/
#include <stdio.h>
struct st_data
{
    int roll_no;
    char name[50];
    char department[10];
    char course[20];
    int yoj;
};
void display(struct st_data, int);
void name_acc_year(struct st_data);
void data_acc_roll(struct st_data);
int main()
{
    struct st_data std[450];
    int nos;

    printf("Enter the number of the student::\n");
    scanf("%d", &nos);
    for (int i = 0; i < nos; i++)
    {
        printf("\n\n:::Enter the %d student data:::\n", i + 1);
        printf("Roll no.:");
        scanf("%d", &std[i].roll_no);
        printf("name of student:");
        fflush(stdin);
        gets(std[i].name);
        printf("Department:");
        scanf("%s", std[i].department);
        printf("Course:");
        scanf("%s", std[i].course);
        printf("Year of joining:");
        scanf("%d", &std[i].yoj);
        fflush(stdin);
    }

    for (int i = 0; i < nos; i++)
    {

        display(std[i], i);
    }
        int per_year;
    printf("Enter the perticular year those you want to student name::");
    scanf("%d", &per_year);
    printf("::Name of the students who joinesd in perticular year %d::\n", per_year);
    for (int i = 0; i < nos; i++)
    {
        if (std[i].yoj == per_year)
        {
            name_acc_year(std[i]);
        }
    }
    int roll;
    printf("Enter the roll of the student which you want to display data:");
    scanf("%d",&roll);
    printf(":::Data of the student which roll no is %d:::\n",roll);
    for (int i = 0; i < nos; i++)
    {
        if (std[i].roll_no == roll)
        {
            data_acc_roll(std[i]);
        }
    }

     return 0;
}
void display(struct st_data d, int i)
{

    printf("\n\n**Data of the %d student**\n", i + 1);
    printf("Roll no. = %d\n", d.roll_no);
    printf("name of student = ");
    puts(d.name);
    printf("Department = %s\n", d.department);
    printf("Course = %s\n", d.course);
    printf("Year of joining = %d\n", d.yoj);
    i++;
}

void name_acc_year(struct st_data yd)
{

    puts(yd.name);
}
void data_acc_roll(struct st_data rd)
{
     printf("Roll no. = %d\n", rd.roll_no);
    printf("name of student = ");
    puts(rd.name);
    printf("Department = %s\n", rd.department);
    printf("Course = %s\n", rd.course);
    printf("Year of joining = %d\n", rd.yoj);
}
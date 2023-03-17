/*C Program to Store Information of a Student Using Structure.*/

#include <stdio.h>
struct student
{
    char name[50];
    int roll_no;
    int class;
    char section[5];
    int marks;
};

int main()
{
    struct student s;
    printf("Enter the student name::\n");
    gets(s.name);
    printf("Enter the student roll no::\n");
    scanf("%d", &s.roll_no);
    printf("Enter the class and section::\n");
    scanf("%d%s", &s.class, s.section);
    printf("Enter the student marks::\n");
    scanf("%d", &s.marks);
    printf("\n\nStudent Name = %s:\n", s.name);
    printf("Student roll no = %d:\n", s.roll_no);
    printf("Class = %d  Section = %s:\n", s.class, s.section);
    printf("Student Marks = %d:\n", s.marks);
    return 0;
}
/*If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 100.*/

#include <stdio.h>

int main()
{
    int Hindi, English, Maths, Physic, Chemistry;
    int total;
    printf("Marks obtained by the student in Hindi = \n");
    scanf("%d", &Hindi);
    printf("Marks obtained by the student in English = \n");
    scanf("%d", &English);
    printf("Marks obtained by the student in Maths = \n");
    scanf("%d", &Maths);
    printf("Marks obtained by the student in Physic = \n");
    scanf("%d", &Physic);
    printf("Marks obtained by the student in Chemistry = \n");
    scanf("%d", &Chemistry);
    total = Hindi + English + Maths + Physic + Chemistry;
    printf("Aggregate marks obtained by the students is %d\n", total);

    printf("Percantage marks obtained by the students is %d", total * 100 / 500);

    return 0;
}
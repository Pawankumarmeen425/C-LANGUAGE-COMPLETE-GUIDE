/*Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the
number of subjects he has failed in. Use the following logic:
- If the student gets first class and the number of subjects he
failed in is greater than 3, then he does not get any grace.
Otherwise the grace is of 5 marks per subject.
- If the student gets second class and the number of subjects he
failed in is greater than 2, then he does not get any grace.
Otherwise the grace is of 4 marks per subject.
- If the student gets third class and the number of subjects he
failed in is greater than 1, then he does not get any grace.
Otherwise the grace is of 5 marks.*/
#include <stdio.h>

int main()
{
    int class_obt, nos_failed;
    printf("1.First Class\n");
    printf("2.Second class\n");
    printf("3.Third Class\n");
    printf("Enter the no of class that obtained by the student:\n");
    scanf("%d", &class_obt);
    printf("Enter the number of subject he has failed in:\n");
    scanf("%d", &nos_failed);
    switch (class_obt)
    {
    case 1:
        if (nos_failed > 3)
        {
            printf("He does not get any grace.\n");
        }
        else
        {
            printf("The grace is of 5 marks per subject.\n");
        }
        break;
    case 2:
        if (nos_failed > 2)
        {
            printf("He does not get any grace.\n");
        }
        else
        {
            printf("The grace is of 4 marks per subject.\n");
        }
        break;
    case 3:
        if (nos_failed > 1)
        {
            printf("He does not get any grace.\n");
        }
        else
        {
            printf("The grace is of 5 marks per subject.\n");
        }
        break;
    default:
        printf("**Not match class**\n");
    }
    return 0;
}
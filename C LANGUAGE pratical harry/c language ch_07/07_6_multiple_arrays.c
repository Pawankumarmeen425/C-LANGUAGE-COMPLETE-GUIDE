#include <stdio.h>

int main()
{
    int marks[3][5];
    for (int i = 0; i < 3; i++)
    {
        printf("***Enter the marks of student %d:***\n", i + 1);
        for (int j = 0; j < 5; j++)
        {

            printf("Marks in %dth student = ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n***Marks of student %d***\n",i+1);
        for (int j = 0; j <5; j++)
        {
            printf("Marks in subject %d = %d\n",j,marks[i][j]);
        }
        
    }

    return 0;
}
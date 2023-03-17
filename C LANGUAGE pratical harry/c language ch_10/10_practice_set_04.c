/*Take name and salary of two employee as input from the user and write then to a 
text file in the following formet::
  name 1,3300
  name 2,7700*/
#include <stdio.h>

int main()
{
    char name1[30], name2[30];
    int sal1, sal2;
    printf("Enter the first employee name::\n");
    gets(name1);
    printf("Enter salary of first employee::");
    scanf("%d", &sal1);
    printf("Enter the second employee name::\n");
    fflush(stdin);
    gets(name2);
    printf("Enter salary of second employee::");
    scanf("%d", &sal2);
    FILE *ptr;
    ptr = fopen("prec04.txt", "w");
    fprintf(ptr, "%s , %d\n", name1, sal1);
    fprintf(ptr, "%s , %d\n", name2, sal2);
    fclose(ptr);

    return 0;
}
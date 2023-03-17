#include <stdio.h>
typedef struct emp_name
{
    char name[30];
}e;

int main()
{
    int noe;
    e emp[50];
    int salary[50];
    printf("Enter the number of employee::\n");
    scanf("%d",&noe);
    for (int  i = 0; i < noe; i++)
    {
        printf("Enter the %d employee deatils::\n",i+1);
        printf("Name :: ");
        getc(emp[i].name);
        printf("Salary :: ");
        scanf("%d",&salary[i]);
    }
    FILE *ptr;
    ptr = fopen("prec04.txt", "w");
    for (int i = 0; i < noe; i++)
    {
        fprintf(ptr,"%d\n",salary[i]);
    }
    
    // fprintf(ptr, "%s , %d\n", name1, sal1);
    // fprintf(ptr, "%s , %d\n", name2, sal2);
    fclose(ptr);

    return 0;
}
/* Print a multiplaction table of a number entered of the user in the program  */
#include <stdio.h>

int main()
{
    int num, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
    printf("Enter the number you want to multiplactio table\n");
    scanf("%d",&num);

    a1 = num * 1;
    a2 = num * 2;
    a3 = num * 3;
    a4 = num * 4;
    a5 = num * 5;
    a6 = num * 6;
    a7 = num * 7;
    a8 = num * 8;
    a9 = num * 9;
    a10 = num * 10;

    printf("Multiplaction table of %d is:\n", num);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);

    return 0;
}
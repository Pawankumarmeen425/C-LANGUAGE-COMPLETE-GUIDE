/*Write a program that generate and prints the of order 0 to 5*/
#include <stdio.h>
#include <string.h>
int main()
{
    char st[50];
    char l1[50] = "A";
    char l2[50] = "B";
    for (int i = 0; i < 5; i++)
    {
        strcpy(st, l2);
        strcat(st, l1);
        printf("%s\n", st);
        strcpy(l1, l2);
        strcpy(l2, st);
    }

    return 0;
}
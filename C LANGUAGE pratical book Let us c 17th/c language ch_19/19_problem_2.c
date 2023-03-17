/*Write a program to append the content of one file at the end of another*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr1, *ptr2;
    ptr1 = fopen("pro1.txt", "r");
    if (ptr1 == NULL)
    {
        printf("Source file can not be open::\n");
        exit(0);
    }

    ptr2 = fopen("pro02.txt", "a");
    if (ptr2 == NULL)
    {
        printf("Target file can not be open::\n");
        exit(1);
    }
    char ch;
ch = fgetc(ptr1);
    while (ch != EOF)
    {
        fputc(ch,ptr2);
             ch = fgetc(ptr1);
    }
    fprintf(ptr2,"\n");

    return 0;
}
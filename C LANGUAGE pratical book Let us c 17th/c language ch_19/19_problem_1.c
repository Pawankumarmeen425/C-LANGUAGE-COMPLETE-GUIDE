/*Write a program to read a file and display its content along with line numbers before each line*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("pro1.txt", "r");
    if (ptr == NULL)
    {
        printf("File cannot be open::\n");
        exit(0);
    }
    ch = fgetc(ptr);
    while (ch != EOF)
    {
        if (ch == '\n')
        {
            printf("%c",'\n');
        }
        else
        {
           printf("%c",ch);
        }
         ch = fgetc(ptr);
    }
fclose(ptr);
    return 0;
}
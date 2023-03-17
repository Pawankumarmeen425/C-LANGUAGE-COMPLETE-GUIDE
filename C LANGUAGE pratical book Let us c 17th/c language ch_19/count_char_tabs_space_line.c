#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("pawan.txt", "r");
    int noc, nos, not, nol = 1;
    noc = nos = not = 0;
    char ch;
    while (1)
    {
        ch = fgetc(ptr);

        if (ch == EOF)
        {
            break;
        }
        if (ch == ' ')
        {
            nos++;
        }
        if (ch == '\n')
        {
            nol++;
        }
        if (ch == '\t')
        {
            not ++;
        }
        else
        {
            noc++;
        }
    }
    fclose(ptr);
    printf("Number of character = %d\n", noc);
    printf("Number of space = %d\n", nos);
    printf("Number of lines = %d\n", nol);
    printf("Number of tabs = %d\n", not );
    return 0;
}
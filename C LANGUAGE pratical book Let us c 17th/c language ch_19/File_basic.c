#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("pawan.txt", "r");
    char ch;
    while (1)
    {
        ch = fgetc(ptr);
        //    fscanf(ptr,"%c",ch);
        /*We can't take character as input from the file by using fscanf(ptr,"%c",ch);   ?*/
        printf("%c", ch);
        if (ch == EOF)
        {
            break;
        }
    }

    return 0;
}
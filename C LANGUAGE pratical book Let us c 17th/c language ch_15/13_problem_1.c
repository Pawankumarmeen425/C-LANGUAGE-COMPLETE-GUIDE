/*Write a program that extracts part of the given string from the
specified position. For example, if the sting is "Working with strings
is fun", then if from position 4, 4 characters are to be extracted
then the program should return string as "king". If the number of
characters to be extracted is 0 then the program should extract
entire string from the specified position.*/
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int exart(char *st, char *, int, int);
int main()
{
    char st[50], ext[100];
    int pos, noc;
    printf("Enter the string:");
    gets(st);
    printf("Enter position and no. of charater to extract::");
    scanf("%d%d", &pos, &noc);
    if (pos<0||pos>strlen(st))
    {
        printf("Improper position value::\n");
        exit(1);
    }
    exart(st, ext, pos, noc);
    printf("The Substring is :%s\n", ext);

    return 0;
}
int exart(char *s, char *e, int p, int c)
{
    int i = 0;
    char *l = s+c;
    // Value at the l is the value where string is extract 

    while (*s != *l)
    {
        if (i >= p)
        {

            *e = *s;
            e++;
        }
        s++;
        i++;
    }
    *e = '\0';
}
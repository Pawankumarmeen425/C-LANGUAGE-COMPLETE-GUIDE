/*Write a program to count the occurence of a given character in a string*/
#include <stdio.h>
int occurence(char *, char);
int main()
{
    char st[] = "pawankumarmeena";
    int occ = occurence(st, 'a');
 printf("Occurence of the cahracter a is %d",occ);
    return 0;
}
int occurence(char st[], char c)
{
    int count = 0;
    char *ptr = st;
    while (*ptr != '\0')
    {

        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
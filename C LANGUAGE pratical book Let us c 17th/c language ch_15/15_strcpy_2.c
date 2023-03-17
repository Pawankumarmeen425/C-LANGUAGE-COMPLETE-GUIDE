#include <stdio.h>
#include <string.h>
int main()
{
    char st1[34] = "Pawan";
    char st2[45];
    strcpy(st2, st1);
    printf("IN the string st1 = %s \n", st1);
    printf("IN the string st2 = %s \n", st2);
    return 0;
}
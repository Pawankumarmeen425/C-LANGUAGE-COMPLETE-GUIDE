/*	C Program to Find the Length of a String.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter the string::\n");
    gets(str);
    int len = strlen(str);
    printf("Length of the string = %d\n", len);
    return 0;
}
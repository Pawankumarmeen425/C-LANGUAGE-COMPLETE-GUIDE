#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr1;
    char string[100];
 

    ptr1 = fopen("string.txt", "w");
    if (ptr1 == NULL)
    {
        printf("Target file cannot be open::\n");
        exit(1);
    }
    printf("Enter the string::\n");
    gets(string);
    fprintf(ptr1, "%s", string);
  fclose(ptr1);
    return 0;
}
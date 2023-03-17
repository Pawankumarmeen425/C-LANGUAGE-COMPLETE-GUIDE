#include <stdio.h>
void print(char s[]);
int main()
{
    char str[56];
    printf("Enter the string::\n");
    // we can't take whitespace using scanf
    gets(str);
    printf("Using custom function::\n");
    print(str);
    printf("Using printf::%s\n", str);
    printf("using puts::");
    puts(str);

    return 0;
}
void print(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        printf("%c", s[i]);
        i++;
    }
    printf("\n");
}
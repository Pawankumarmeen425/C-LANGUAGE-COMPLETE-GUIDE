/*Write down macro definitions for the following:
1. To test whether a character is a small case letter or not.
2. To test whether a character is a upper case letter or not.
3. To test whether a character is an alphabet or not. Make use of
the macros you defined in 1 and 2 above.
4. To obtain the bigger of two numbers.*/
#include <stdio.h>
#define UPPER(x) (x >= 65 && x <= 90)
#define LOWER(x) (x >= 97 && x <= 122)
#define ALPHA(x) (UPPER(x) || LOWER(x))
#define BIG(x, y) (x > y)
int main()
{
    char ch;
    int a, b;
    printf("Enter any character/Alphabet::\n");
    scanf("%c", &ch);
    printf("Enter two number::\n");
    scanf("%d%d", &a, &b);
    if (UPPER(ch) == 1)
    {
        printf("Entered character is a Upper latter::\n");
    }
    if (LOWER(ch) == 1)
    {
        printf("Entered character is a lower letter::\n");
    }
    if (ALPHA(ch) != 1)
    {
        printf("Entered character other then alphabet::\n");
    }

    if (BIG(a, b) == 1)
    {
        printf("Number %d is a bigger number::\n", a);
    }
    if (BIG(a, b) != 1)
    {
        printf("Number %d is a bigger number::\n", b);
    }

    return 0;
}
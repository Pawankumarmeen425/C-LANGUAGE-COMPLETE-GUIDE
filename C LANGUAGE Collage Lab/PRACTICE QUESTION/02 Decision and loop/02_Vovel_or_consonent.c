/*C Program to check weather a character is vovel or consonent*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
    {
        printf("Entered character is Vovel.\n");
    }
    else
    {
        printf("Entered character is Consonent.\n");
    }
    return 0;
}
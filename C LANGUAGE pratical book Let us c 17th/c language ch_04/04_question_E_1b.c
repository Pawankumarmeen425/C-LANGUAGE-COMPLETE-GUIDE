/*Using conditional operators determine:
Whether a character entered through the keyboard is a special
symbol or not.*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character:\n");
    scanf("%c", &ch);
    /*ASCII vlaue of special symbol lies  between 32 to 47 and 58 to 64*/
   
    ((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64)) ? printf("Character  is special symbol:\n") : 
    printf("Character  is not  special symbol:\n");
    return 0;
}
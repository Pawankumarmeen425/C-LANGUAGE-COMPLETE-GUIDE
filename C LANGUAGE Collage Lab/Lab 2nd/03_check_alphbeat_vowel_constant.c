//Check whether user entered alphabet or not.....also check for vowel and consonants
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("User entered an alphabet\n");
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("Alphabet is a vowel");
        }
        else
        {
            printf("Alphabet is a consonant");
        }
    }
    else
    {
        printf("user did not enter an alphabet");
    }

    return 0;
}
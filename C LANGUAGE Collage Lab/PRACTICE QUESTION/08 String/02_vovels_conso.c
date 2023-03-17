/*	C Program to Count the Number of Vowels, Consonants and so on.*/
#include <stdio.h>

int main()
{
    char str[100];
    int vovel, consonent, digit, character, space;
    vovel = consonent = digit = character = space = 0;
    printf("Enter the string::\n");
    gets(str);
    int i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u') || (str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U'))
        {
            vovel++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonent++;
        }
        else if ((str[i] >= '0' && str[i] <= '9'))
        {
            digit++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else
        {
            character++;
        }
        i++;
    }
    printf("Number of vowels in the string = %d\n", vovel);
    printf("Number of Consonants in the string = %d\n", consonent);
    printf("Number of digit in the string = %d\n", digit);
    printf("Number of space in the string = %d\n", space);
    printf("Number of character in the string = %d\n", character);
    return 0;
}

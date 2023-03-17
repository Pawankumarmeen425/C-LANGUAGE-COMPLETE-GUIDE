/*	C Program to Find the Frequency of Characters in a String.*/
#include <stdio.h>

int main()
{
    char str[50];
    char ch;
    int count=0;
    printf("Enter the string::\n");
    scanf("%s", str);
    printf("Enter the character::\n");
    fflush(stdin);
    scanf("%c", &ch);
    int i =0;
    while (str[i]!='\0')
    {
       if (ch==str[i])
       {
          count++;
       }
       i++;
    }
    
    printf("Frequency of caharacter %c = %d\n", ch, count);

    return 0;
}
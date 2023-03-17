/*C Program to Remove all Characters in a String Except Alphabet.*/
#include<stdio.h>

int main (){
    char str[100];
    printf("Enter the string::\n");
    gets(str);
    printf("New string after removing all character::\n");
    int i=0;
    while (str[i]!='\0')
    {
       if ((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
       {
           printf("%c",str[i]);
       }
       i++;
    }
    
return 0;
}
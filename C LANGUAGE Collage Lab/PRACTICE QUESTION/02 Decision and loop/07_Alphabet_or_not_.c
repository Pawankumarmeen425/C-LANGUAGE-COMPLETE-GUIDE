/*C Program to Check weather  a character is alphabet or not*/
#include<stdio.h>

int main (){
    char ch;
    printf("Enter  the character:\n");
    scanf("%c",&ch);
    if (ch>=65&&ch<=90||ch>=97&&ch<=122)
    {
        printf("Entered character is Alphabet::\n");
    }
    else{
        printf("Entered character is not Alphabet::\n");
    }
    
return 0;
}
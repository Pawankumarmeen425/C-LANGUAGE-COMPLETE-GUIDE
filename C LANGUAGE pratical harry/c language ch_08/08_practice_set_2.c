/*Write a program to take string as an input from the user using
%c and %s . Confirm that the string are equal*/
#include<stdio.h>

int main (){
    char st1[30];
    char st2[56];
    printf("Enter the value fo first string\n");
    scanf("%s",st1);
    printf("Enter the value of second string character by character::\n");
    char c;
    int i=0;
    while (c!='\n')
    {   fflush(stdin);
        scanf("%c",&c);
        /*If We don't use fflush then 
        after the printf statment '\n' consider as a character and condition become false and terminate 
        while loop
        But when we use fflush then it remove previous character.
        and work till then we don't enter '\n'*/
        st2[i] = c;
        i++;
    }
    st2[i] = '\0';
    printf("The value of st1 is %s\n",st1);
     printf("The value of st2 is %s\n",st2);

    
return 0;
}
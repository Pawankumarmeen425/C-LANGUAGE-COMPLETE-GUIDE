/*Using conditional operators determine:
(1). Whether the character entered through the keyboard is a
lower case alphabet or not.*/
#include<stdio.h>

int main (){
    char ch;
    printf("Enter the character :\n");
    scanf("%c",&ch);
    /*ASCII value of lower case alphabet lies between 97 to 122.*/
    
(ch>=97 && ch<=122)? printf("Character is lower case alphabet:\n"):printf("Character is upper case alphabet:\n");

return 0;
}
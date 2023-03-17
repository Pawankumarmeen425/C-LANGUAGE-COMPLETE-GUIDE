/* Write a program  to determine wheather a character entered by the user is 
lowercase or not.*/
#include<stdio.h>

int main (){
    //  97-122=a-z  ASCII value
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    if((ch>96)&&(ch<123)){
        printf("Charcter entered by the user is lowercase");
    }
    else
    {
        printf("Character entered by the user is not lowercase");
    }
    
return 0;
}
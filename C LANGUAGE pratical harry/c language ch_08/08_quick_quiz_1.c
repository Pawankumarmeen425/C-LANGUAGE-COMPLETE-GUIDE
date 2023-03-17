/*Create a string using " " and print its content using loop*/
#include<stdio.h>

int main (){
    // char str[] = {'p','a','w','a','n','\0'};
    char str[]= "Pawan";
    char *ptr = str;
     // str means base address of the array
     while (*ptr!='\0')
     {
         printf("%c",*ptr);
         ptr++;
     }
     
     
return 0;
}
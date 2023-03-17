/*Write a program to encrypt a string by adding  1 to the ASCII value of its character*/
#include<stdio.h>
void encrypt(char*ptr);
int main (){
    char c[]="pawan kumar";
    encrypt(c);
    printf("Incrypted string is ::%s",c);
return 0;
}
void encrypt(char*ptr)
{
    while (*ptr!='\0')
    {
        *ptr = *ptr+1;
        ptr++;
    }
    *ptr='\0';
}
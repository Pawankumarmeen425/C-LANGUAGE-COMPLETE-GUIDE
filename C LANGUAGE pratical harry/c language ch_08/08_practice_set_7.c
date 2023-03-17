/*Write a program to decrypt the string encrypted using encrypt function in problem 6 */
#include<stdio.h>
void decrypt(char*ptr);
int main (){
    char c[]="qbxbo!lvnbs";
    decrypt(c);
    printf("decrypted string is ::%s",c);
return 0;
}
void decrypt(char*ptr)
{
    while (*ptr!='\0')
    {
        *ptr = *ptr-1;
        ptr++;
    }
    *ptr='\0';
}
/*Write a program to receive an integer and find its octal equivalent.
 (Hint: To obtain octal equivalent of an integer, divide it continuously
by 8 till dividend doesn’t become zero, then write the remainders
obtained in reverse direction.)*/
#include<stdio.h>

int main (){
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    while (num !=0)
    {
        num = num/8;
    }
    
return 0;
}
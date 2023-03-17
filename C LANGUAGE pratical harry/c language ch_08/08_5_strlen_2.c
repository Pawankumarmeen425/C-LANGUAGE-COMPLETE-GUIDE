#include<stdio.h>
#include<string.h>
int main (){
    char st[50];
    printf("Enter your string::\n");
   
    gets(st);
    int a = strlen(st);
    printf("Length of string st is %d",a);
return 0;
}
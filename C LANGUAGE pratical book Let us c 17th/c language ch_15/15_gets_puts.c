#include<stdio.h>

int main (){
    char name[34];
    printf("Enter your full name:\n");
    gets(name);
    puts(name);
    printf("Enter your full name:\n");
    scanf("%[^\n]s",name);
    printf("%s",name);
return 0;
}
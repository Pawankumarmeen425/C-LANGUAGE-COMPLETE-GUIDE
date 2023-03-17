#include<stdio.h>

int main (){
    char st[50];
    printf("Enter your name::\n");
scanf("%s",st);
// st and &st[0] both works same

printf("Your name is :: %s",st);
return 0;
}
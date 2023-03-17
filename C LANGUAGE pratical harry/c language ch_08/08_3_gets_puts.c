/*
#include<stdio.h>

int main (){
    char st[50];
    printf("Enter your name ::\n");
    gets(st);
    printf("Your name is :: %s",st);
return 0;
}
*/

#include<stdio.h>

int main (){
    char st[50];
    printf("Enter your name ::\n");
    gets(st);
    puts(st);
  
return 0;
} 
/*we can use gets without puts but we can't use puts without gets
 puts use to print stroing value in gets in next line */
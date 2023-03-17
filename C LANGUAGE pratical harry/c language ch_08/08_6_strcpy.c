#include<string.h>
#include<stdio.h>

int main (){
    // char *st = "Pawan";
       char st[24] = "Pawan";
    char st2[34];
    strcpy(st2,st);
    printf("Now in the st2 is %s",st2);
return 0;
}
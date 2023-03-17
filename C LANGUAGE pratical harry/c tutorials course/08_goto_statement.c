#include<stdio.h>

int main (){
    label:
    printf("We are inside the lable\n");
    goto end;
    printf("Hallo word \n");
    goto label;
    end:
    printf("We are at end\n");
return 0;
}
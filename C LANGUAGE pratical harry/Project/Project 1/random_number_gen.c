#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    int number;
    srand(time(0));
    // srand takes seed as an input and it defined inside the stdlib.h
    number = rand()%100+1;
    // Generate random number between 1 and 100
    // If we want to generate number bw 0 and 100 then,, number = rand()%100;
    printf("The random number is %d\n",number);
return 0;
}
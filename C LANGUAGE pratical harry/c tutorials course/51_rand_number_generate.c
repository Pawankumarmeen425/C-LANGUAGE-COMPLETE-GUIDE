#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int randnum(int n);
int main()
{
    int number;
    printf("Enter the number where you want to generate random numbers::\n");
    scanf("%d", &number);
    printf("The random number is %d\n", randnum(number));
    return 0;
}
int randnum(int n)
{
    int number;
    srand(time(0));
    // srand takes seed as an input and it defined inside the stdlib.h
    // If we want to generate number bw 0 and 100 then,, number = rand()%100;
    number = rand() % n + 1;
    return number;
}
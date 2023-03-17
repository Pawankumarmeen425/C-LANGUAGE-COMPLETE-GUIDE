/*	C Program to Reverse a Number.*/
#include <stdio.h>

int main()
{
    int num, count = 0, ed, rd, d5, d4, d3, d2, d1;
    printf("Enter the five digit number::\n");
    scanf("%d", &num);
    ed = num % 10;
    rd = num / 10;
    d5=ed;

    ed = rd % 10;
    rd = rd/ 10;
    d4=ed;

    ed = rd % 10;
    rd = rd/ 10;
    d3=ed;

    ed = rd % 10;
    rd = rd / 10;
    d2=ed;

    ed = rd % 10;
    rd = rd / 10;
    d1=ed;


    printf("Revers of five digit number %d is %d%d%d%d%d\n", num, d5, d4, d3, d2, d1);

    return 0;
}
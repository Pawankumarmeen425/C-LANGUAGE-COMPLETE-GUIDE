/*If a five-digit number is input through the keyboard, write a
program to reverse the number */
#include <stdio.h>

int main()
{
    // int num, ed, rd, d5, d4, d3, d2, d1;
    int num, rnum=0, d;
    printf("Enter the five digit number\n");
    scanf("%d", &num);
    for (int i = 0; num!=0; i++)
    {
        d = num % 10;
        num = num / 10;
        rnum = rnum * 10 + d;
    }

    printf("Revers of five digit number %d is %d", num, rnum);
    // ed = num % 10;
    // rd = num / 10;
    // d5=ed;

    // ed = rd % 10;
    // rd = rd/ 10;
    // d4=ed;

    // ed = rd % 10;
    // rd = rd/ 10;
    // d3=ed;

    // ed = rd % 10;
    // rd = rd / 10;
    // d2=ed;

    // ed = rd % 10;
    // rd = rd / 10;
    // d1=ed;

    return 0;
}
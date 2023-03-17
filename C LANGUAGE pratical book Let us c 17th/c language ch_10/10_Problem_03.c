/*Write a recursive function to obtain the first 25 numbers of a
Fibonacci sequence. In a Fibonacci sequence the sum of two
successive terms gives the third term. Following are the first
few terms of the Fibonacci sequence:
1 1 2 3 5 8 13 21 34 55 89….*/
#include <stdio.h>
void fib(int, int, int);
int main()
{

    int odd = 1, current = 1;
    printf("%d\t%d\t", odd, current);
    fib(odd, current, 23);
    return 0;
}

void fib(int odd, int current, int terms)
{
    int newterms;
    if (terms>=1)
    {
        newterms = odd+current;
        printf("%d\t",newterms);
        terms = terms-1;
        fib(current,newterms,terms);
    }
    
}
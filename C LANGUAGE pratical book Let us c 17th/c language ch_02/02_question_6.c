/*Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.*/
#include <stdio.h>

int main()
{
    int c, d, e;
    printf("Enter the vlaue at location C :\n");
    scanf("%d", &c);
    printf("Enter the vlaue at location D :\n");
    scanf("%d", &d);
    e = c;
    c = d;
    d = e;
    printf("New  value at location C: %d\n", c);
    printf("New  value at location D: %d\n", d);
    
    
    return 0;
}
/*Write a program using function to prints the follwing pattern(first n natural)
*
***
*****
*/

#include <stdio.h>
void printpattern(int n);
int main()
{
    int num;
    printf("Enter the number that you want pattern:\n");
    scanf("%d", &num);
    printpattern(num);
    return 0;
    /*1-1
    2-3
    3-5
    4-7
    5-9
    .
    .
    .
    (2n-1)*/
}
void printpattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printpattern(n - 1);
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}
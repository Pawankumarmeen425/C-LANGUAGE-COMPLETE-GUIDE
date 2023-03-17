/*A positive integer is entered through the keyboard, write a
program to obtain the prime factors of the number. Modify the
function suitably to obtain the prime factors recursively.*/
#include <stdio.h>
#include <stdlib.h>
void prime(int num);
void recersively(int num);

int main()
{
    int num;
    printf("Enter the positive nubmer::\n");
    scanf("%d", &num);
    prime(num);
    printf("\nPrime Factor of the number %d Using Recercively approch::", num);
    recersively(num);
    return 0;
}
void prime(int num)
{
    int n = 2;
    printf("Prime Factor of the number %d Using iteretivaly approch::", num);
    if (num == 0)
    {
        exit;
    }

    while (num != 1)
    {

        if (num % n == 0)
        {
            num = num / n;
            printf("%d ", n);
        }
        else
        {
            n++;
        }
    }
}
int n = 2;
void recersively(int num)
{
    // if (num == 1)
    // {
    //     exit;
    // }
    // else
    // {
    //     if (num % n == 0)
    //     {
    //         printf("%d ", n);
    //         num = num / n;
    //     }
    //     else
    //     {
    //         n++;
    //     }
    //     recersively(num);
    // }

    if (n <= num)

    {
        if (num % n == 0)
        {
            printf("%d ", n);
            num = num / n;
        }
        else
        {
            n++;
        }
        recersively(num);
    }
}
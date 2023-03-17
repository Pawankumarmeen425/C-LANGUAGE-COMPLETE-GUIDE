/*Implement the following procedure to generate prime
numbers from 1 to 100 in a program. This procedure is called
sieve of Eratosthenes.
step 1: Fill an array num[ 100 ] with numbers from 1 to
100
step 2: Starting with the second entry in the array, set all its
multiples to zero.
step 3: Proceed to the next non-zero element and set all its
multiples to zero.
step 4: Repeat step 3 till you have set up the multiples of
all the non-zero elements to zero188 Let Us C Solutions
step 5: At the conclusion of step 4, all the non-zero entries
left in the array would be prime numbers, so print
out these numbers.*/
#include <stdio.h>

int main()
{
    int arr[100];
    printf("Fill the array with 1 to 100 numbers::\n");
    for (int i = 1; i <= 100; i++)
    {
        arr[i] = i;
    }
    for (int i = 1; i <= 100; i++)
    {
        int j = 2;
        for (j ; j < i; j++)
        {
            if (arr[i] % j == 0)
            {
                arr[i] = 0;
            }
        }
    }
    printf("Prime Number between 1 to 100::\n");
    for (int i = 1; i < 100; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int i=2, num, prime = 1;
    printf("Enter a number:\n");
    scanf("%d",&num);
    // while (i<num)
    // {
    //     if (num%i==0)
    //     {
    //         prime=0;
    //         break;
    //     }
    //     i++;
    // }
    
    do
    {
        if (num%i==0)
        {
            prime=0;
            break;
        }
        i++;
    } while (i<num);    /* do while loop execute atleast once so if(prime==0 && num!=2)*/
    
    if (prime == 0 )
    {
        printf(" %d is Not a prime number\n", num);
    }
    else
    {
        printf("%d is a prime number\n", num);
    }

    return 0;
}
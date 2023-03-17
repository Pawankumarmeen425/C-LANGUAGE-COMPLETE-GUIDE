#include <stdio.h>

int main()
{
    int i = 34;
    int *j = &i;  /*j will store the address of i*/
    int **k = &j; /* k will store address of pointer (j) */
    printf("The vlaue of i is %d\n", i);
    printf("The vlaue of i is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    printf("The address of j is %u\n", &j);
    printf("The value of j is %d\n", *(&j));
    printf("The address of j is %u\n", k);
    printf("The value  of j is %d\n", *k);

    return 0;
}
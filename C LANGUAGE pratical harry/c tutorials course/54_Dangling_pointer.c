#include <stdio.h>
#include <stdlib.h>
int *fundang()
{
    int a, b, sum;
    a = 34;
    b = 53;
    sum = a + b;
    return &sum;
}
int main()
{
    // Case 1:: De Allocation of a memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 354;
    ptr[1] = 34;
    ptr[2] = 54;
    ptr[3] = 56;
    free(ptr);
    // Now ptr is a dangling pointer

    // Case 2:: Function returning local variables address
    int *danptr = fundang();
    // Now danptr is a dangling pointer

    //   Case 3:: If variables goes out of scope
    int *danptr1;
    {
        int a = 34;
        danptr1 = &a;
    }
    // danptr1 ; Here variables goes out of scope which means danptr1 is pointing to a location which is freed 
    // and hence danptr1 is now a dangling pointer
    
    
    return 0;
}
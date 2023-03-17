#include <stdio.h>

int main()
{
    int arr[] = {21, 2, 121, 2, 12, 12, 12};
    int i = 4, *j, *k, *x, *y;
    j = &i;
    j = j + 9;
    k = &i;
    k = k - 3;
    x = &arr[1];
    y = &arr[3];
    printf("%d\n", y - x);
    printf("%d\n", j - k);
    j = &arr[4];
    k = (arr + 4);
    if (j == k)
    {
        printf("These two pointers point to the same location\n");
    }
    else
    {
        printf("These two pointers point to the different location\n");
    }
    return 0;
}
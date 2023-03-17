#include <stdio.h>

int main()
{
    int num[] = {12, 312, 31, 231, 31, 312, 31, 3};
    for (int i = 0; i < 8; i++)
    {
        printf("adderss = %u  ", &num[i]);
        printf("element = %d %d %d %d \n ", num[i], *(num + i), *(i + num), i[num]);
    }

    return 0;
}
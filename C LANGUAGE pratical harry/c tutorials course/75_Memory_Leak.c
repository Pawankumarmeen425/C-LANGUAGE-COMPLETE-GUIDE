#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a = 2;
    int i = 0;
    int *ptr;
    while (i < 2431)
    {
        printf("Welcome YOu!!\n");
        ptr = malloc(24342 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
    }

    return 0;
}
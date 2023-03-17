/*Print pattern like this way::
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number upto you want print pattern::\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
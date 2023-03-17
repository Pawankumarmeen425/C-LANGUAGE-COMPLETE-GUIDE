/*C Program to Access Elements of an Array Using Pointer.*/
#include <stdio.h>
void acess(int *);
int main()
{
    int array[10];
    printf("Enter the elements of the array::\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d elements of the array::\n", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Access elements of the arrays using Pointer::\n");
    acess(array);

    return 0;
}

void acess(int *a)
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d Elements of the array = %d\n", i + 1, *a);
        a++;
    }
}

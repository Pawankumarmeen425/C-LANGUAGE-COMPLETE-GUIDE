#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >= 80)
    //  if (age != 80)
    {
        printf("you are above 80,you cannot drive\n");
    }
    else
    {
        printf("you can drive\n");
    }
    if (age == 50)
    {
        printf("half century\n");
    }

    return 0;
}
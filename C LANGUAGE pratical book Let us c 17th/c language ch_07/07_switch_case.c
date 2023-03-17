#include <stdio.h>

int main()
{
    int age;
    printf("Enter age\n");
    scanf("%d", &age);
    switch (age)
    {
    case 3:
        printf("The age is 3 \n");
        break;  
        /*If we don't use break after printf then after true case every statement are execute*/
    case 20:
        printf("The age is 20 \n");
        break;
    case 25:
        printf("The age is 25\n");
        break;
    default:
    printf("The age is not 3 , 20 and 25:");
        break;
    }
    return 0;
}